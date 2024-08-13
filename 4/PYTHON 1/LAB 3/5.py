# wap to input a string and test weather it symetrical and palindrome
string = input("Enter a string: ")

if string == string[::-1]:
    print("The string is a palindrome.")
    if all(string[i] == string[len(string) - i - 1] for i in range(len(string) // 2)):
        print("The string is symmetrical.")
    else:
        print("The string is not symmetrical.")
else:
    print("The string is not a palindrome.")
