# 5.Write a program to print the intersection of two arrays using lambda function.
arr1 = [34, 3, 2, 3]
arr2 = [3, 12, 3, 4]

intersection = lambda arr1=[], arr2=[]: print(
    set(arr1).intersection(set(arr2)))

intersection(arr1, arr2)
