# 4.Write a program to input two dictionaries and print the values by merging both the dictionaries.

dict1 = {}
n1 = int(input("Enter the number of key-value pairs in dictionary 1: "))
print("Enter key-value pairs for dictionary 1:")
for _ in range(n1):
    key = input("Enter key: ")
    value = input("Enter value: ")
    dict1[key] = value

# Input the second dictionary
dict2 = {}
n2 = int(input("Enter the number of key-value pairs in dictionary 2: "))
print("Enter key-value pairs for dictionary 2:")
for _ in range(n2):
    key = input("Enter key: ")
    value = input("Enter value: ")
    dict2[key] = value

# Merge the dictionaries
merged_dict = dict1.copy()
merged_dict.update(dict2)

# Print the merged dictionary
print("Merged dictionary:")
print(merged_dict)
