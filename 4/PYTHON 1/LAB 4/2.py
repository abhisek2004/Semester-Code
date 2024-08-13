# 2.Wap to create two lists , first list contains 5 integers and second list contains 5 strings. Print both lists one element from each list combined at a time.

int_list = [1, 2, 3, 4, 5]
str_list = ["apple", "banana", "orange", "grape", "kiwi"]
for i in range(len(int_list)):
    print(int_list[i], str_list[i])
