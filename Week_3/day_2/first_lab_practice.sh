#!/bin/bash

echo "Please enter your name:"
read name


echo "Enter the first number:"
read num1
echo "Enter the second number:"
read num2

# Perform arithmetic operations
sum=$((num1 + num2))
difference=$((num1 - num2))
product=$((num1 * num2))

# Display the results
echo "Hello, $name!"
echo "You entered two numbers: $num1 and $num2"
echo "Sum: $sum"
echo "Difference: $difference"
echo "Product: $product"

# End of the script
