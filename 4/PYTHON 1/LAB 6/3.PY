# wap to triple all elements in given list integer using map fun

def triple_elements(input_list):
    def triple(element):
        return element * 3
    return list(map(triple, input_list))


input_data = [1, 2, 3, 4, 5]
output_data = triple_elements(input_data)
print(output_data)
