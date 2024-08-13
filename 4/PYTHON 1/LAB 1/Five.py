# wap to enter the cofficient of a quadratic euation and find  out the eqiavelent root

import math

print("Enter the three coefficients:")
a = int(input())
b = int(input())
c = int(input())

root_1 = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
root_2 = (-b - math.sqrt(b**2 - 4*a*c)) / (2*a)

print("The roots are:", root_1, root_2)
