# 5.Write a program to create a dictionary and print the key which has the maximum unique value.


my_dict = {'a': [1, 2, 3], 'b': [4, 5, 6], 'c': [1, 2, 3, 4]}
max_unique_value = 0
max_unique_key = None
for key, value in my_dict.items():
    unique_values = len(set(value))
    if unique_values > max_unique_value:
        max_unique_value = unique_values
        max_unique_key = key
print("Key with maximum unique value:", max_unique_key)
