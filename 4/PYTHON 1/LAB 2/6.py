# wap to enter a string and print it in reverse also print the no of vowels adn consonants in it.
string = input("Enter a string: ")

print(string[::-1])

list_string = list(string)
vowel = 0
consonant = 0
for i in string:
    if i in ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']:
        vowel += 1
    else:
        consonant += 1

print("Consonant:", consonant)
print("Vowel:", vowel)