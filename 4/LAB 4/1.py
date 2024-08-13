# 1. Write a program to input 10 integers into a list and print the second largest and second smallest element of the list.(without using the sort function)
integer_list = []
for i in range(10):
    num = int(input("Enter an integer: "))
    integer_list.append(num)
max_num = integer_list[0]
second_max = None
min_num = integer_list[0]
second_min = None

for num in integer_list:
    if num > max_num:
        second_max = max_num
        max_num = num
    elif second_max is None or num > second_max:
        second_max = num

    if num < min_num:
        second_min = min_num
        min_num = num
    elif second_min is None or num < second_min:
        second_min = num
print("Second largest element:", second_max)
print("Second smallest element:", second_min)
