# wap to enter a number and check whether it is a palindrome number or not.
number = input("Enter a number: ")

if number == number[::-1]:
    print("Palindrome number")
else:
    print("Not a palindrome number")
