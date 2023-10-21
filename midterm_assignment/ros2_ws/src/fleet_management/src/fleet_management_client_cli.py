import rclpy
from rclpy.action import ActionClient
from fleet_management.action import FleetManagement
from fleet_data import cities, trucks

def main():
    rclpy.init()
    node = rclpy.create_node('fleet_management_client')

    # Create an Action Client
    action_client = ActionClient(node, FleetManagement, 'fleet_management')

    # Get user inputs
    origin_city = int(input("Enter the origin city number: "))
    destination_city = int(input("Enter the destination city number: "))
    load_tonnage = float(input("Enter the load tonnage: "))

    def send_request(origin_city, destination_city, load_tonnage):
        goal = FleetManagement.Goal()
        goal.origin_city = origin_city
        goal.destination_city = destination_city
        goal.load_tonnage = load_tonnage

        future = action_client.send_goal_async(goal)

        rclpy.spin_until_future_complete(node, future)

        if future.result() is not None:
            goal_handle = future.result()

            if goal_handle.accepted:
                print("Goal accepted, waiting for result...")

                while rclpy.ok():
                    if goal_handle.is_done:
                        # Action completed, break the loop
                        break

                if goal_handle.succeeded():
                    result = goal_handle.result
                    selected_truck_info = trucks[result.selected_truck]
                    print(f'Selected Truck: {selected_truck_info["name"]}')
                    if result.vehicle_routes:
                        print(f'Estimated Route: {result.vehicle_routes[0]}')
                    else:
                        print("No vehicle routes available.")
                else:
                    print("Action failed.")
            else:
                print("Goal was not accepted by the server.")
        else:
            print("Action client did not receive a valid result.")

    send_request(origin_city, destination_city, load_tonnage)
    node.destroy_node()
    rclpy.shutdown()

if name == 'main':
    main()
