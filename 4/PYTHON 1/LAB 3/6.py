# wap to read a sentence and print all the even length words present in it
sentence = input("Enter a sentence: ")
words = sentence.split()

print("Even length words in the sentence:")
for word in words:
    if len(word) % 2 == 0:
        print(word)
