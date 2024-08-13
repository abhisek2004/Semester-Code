# wap to enter there sides of a triangles find out the area of the triangle

import math

# Input sides of the triangle
side_a = float(input("Enter the length of side a: "))
side_b = float(input("Enter the length of side b: "))
side_c = float(input("Enter the length of side c: "))

# Calculate semi-perimeter
s = (side_a + side_b + side_c) / 2

# Calculate area using Heron's formula
triangle_area = math.sqrt(s * (s - side_a) * (s - side_b) * (s - side_c))

# Display the area of the triangle
print(f"The area of the triangle is: {triangle_area}")
