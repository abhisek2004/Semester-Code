# 3.Write a program to create a function which takes list as argument and returns the even values of the list , print the new list with all the even values.
def even(arr=[]):
    new_arr = []
    for i in arr:
        if i % 2 == 0:
            new_arr.append(i)
    return new_arr


array = [4, 3, 2, 3, 70, 4, 2, 2, 3, 1, 56]

print(even(array))
