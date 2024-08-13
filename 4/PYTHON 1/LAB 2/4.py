# wap to enter a number and check wether the number is a perfect number or not.
num = int(input("Enter a number: "))
i = 1
sum = 0
temp = num
while i < num:
    if num % i == 0:
        sum = sum+i
    i = i+1

if sum == temp:
    print(temp, "is a perfect number")
else:
    print(temp, "is not a perfect number")
