# wap to convert given list of integer and topple of integer in a list of integer in a string using map fun
def convert_to_string(input_list):
    def int_to_string(element):
        if isinstance(element, int):
            return str(element)
        elif isinstance(element, tuple):
            return '(' + ', '.join(map(str, element)) + ')'
        else:
            raise ValueError("Unsupported type")
    return list(map(int_to_string, input_list))


input_data = [1, (2, 3), 4, (5, 6, 7)]
output_data = convert_to_string(input_data)
print(output_data)
