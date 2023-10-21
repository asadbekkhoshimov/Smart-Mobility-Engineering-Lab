import rclpy
from rclpy.action import ActionServer
from fleet_management.action import FleetManagement
from fleet_data import cities, trucks

def calculate_routes(origin_city, destination_city, load_tonnage):
    # Replace this logic with your own fleet management algorithm
    # Calculate the routes and trucks needed based on the client's input
    # For this example, let's assume a simple routing logic
    route = f'{cities[origin_city]} to {cities[destination_city]}'
    for truck_id, truck_info in trucks.items():
        if truck_info['capacity'] >= load_tonnage:
            return [route], truck_id

    # If no suitable truck is found, return an error route and truck_id
    return ['No suitable trucks available'], -1

def main():
    rclpy.init()
    node = rclpy.create_node('fleet_management_server')

    def goal_callback(goal_handle):
        goal_request = goal_handle.request
        origin_city = goal_request.origin_city
        destination_city = goal_request.destination_city
        load_tonnage = goal_request.load_tonnage

        # Implement your fleet management logic using the calculate_routes function
        routes, selected_truck_id = calculate_routes(origin_city, destination_city, load_tonnage)

        if selected_truck_id == -1:
            goal_handle.abort()
            return

        result = FleetManagement.Result()
        result.vehicle_routes = routes
        result.selected_truck = selected_truck_id

        # Set the result using set_succeeded
        goal_handle.succeed(result=result)

    action_server = ActionServer(node, FleetManagement, 'fleet_management', goal_callback)

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Action server stopped')

    node.destroy_node()
    rclpy.shutdown()

if name == 'main':
    main()
