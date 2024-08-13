# 1.Write a program to create a set and copy the contents into a new set one element at a time.

set_1 = {3, 2, 5, 4, 7, 1, 8, 10}
set_2 = set()

for i in set_1:
    set_2.add(i)

print("Original Set: ", set_1)
print("Copied Set: ", set_2)


