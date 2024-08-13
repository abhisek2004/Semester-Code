# wap to enter two no and swap them using bitwise operators.
print("Enter two numbers:")
a = int(input())
b = int(input())
print("Before swapping:")
print("a=", a, " b=", b)

print("After swapping:")
a = a ^ b
b = a ^ b
a = a ^ b
print("a=", a, " b=", b)
