# 2.Write a program to create a function which will print first 15 terms of the fibonacci series(without using recursion)

num1 = 1
num2 = 1
print(num1, end="")
for i in range(14):
    # num3=num1+num2

    print(",", num2, end="")
    num1, num2 = num2, num1+num2
