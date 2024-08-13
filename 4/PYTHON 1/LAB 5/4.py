# 4.Write a program to check if a value is present in the list or not by using lambda function.

new_list = [45, 2, 86, 96, 41, 5, 6, 12, 3, 4, 23, 5, 8, 7, 5, 2]
n = int(input("Enter the element you want to find in the list: "))


def present(n, new_list): return print(
    "Present") if n in new_list else print("Not Present")


present(n, new_list)
