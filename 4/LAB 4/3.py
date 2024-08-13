# 3.Write a program to create an integer list of 20 elements and increase the odd valued elements by 5.

integer_list = [i for i in range(1, 21, 2)]  # Generates a
for i in range(len(integer_list)):
    if integer_list[i] % 2 != 0:
        integer_list[i] += 5
print(integer_list)
