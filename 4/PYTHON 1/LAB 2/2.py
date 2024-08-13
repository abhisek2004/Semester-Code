# wap to enter a 5 digit number and print the digits present at odd locations
num = input("Enter a 5 digit number:")
num_list = list(num)
i = 0
print("The number at odd locations are : ")
while i < len(num_list):
    if i % 2 != 0:
        print(num_list[i])
    i = i+1
