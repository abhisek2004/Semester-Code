# 6.Write a program to enter a dictionary and remove the duplicate values inside the dictionary.

my_dict = {'a': 1, 'b': 2, 'c': 1, 'd': 3}
unique_values = list(set(my_dict.values()))
unique_dict = {key: value for key,
               value in my_dict.items() if value in unique_values}
print(unique_dict)
