# wap to read a string and remove all duplicate words on it
sentence = input("Enter a sentence: ")
words = sentence.split()
unique_words = set(words)
result = ' '.join(unique_words)
print("String with duplicate words removed:")
print(result)
