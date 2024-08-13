# wap to convert all character to upper and lower case and elements the duplicate letter from a given sequences using map fun
def convert_and_remove_duplicates(sequence):
    upper_case = list(map(lambda char: char.upper(), sequence))
    lower_case = list(map(lambda char: char.lower(), sequence))
    unique_chars = list(set(sequence))

    return upper_case, lower_case, unique_chars


input_sequence = input("Enter a sequence of characters: ")
upper_case, lower_case, unique_chars = convert_and_remove_duplicates(
    input_sequence)
print("Sequence in Upper Case:", ''.join(upper_case))
print("Sequence in Lower Case:", ''.join(lower_case))
print("Unique Characters in the Sequence:", ''.join(unique_chars))
