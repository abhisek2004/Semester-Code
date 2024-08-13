# wap to add 3 given list using math and lambda fun
import math
list1 = [1, 2, 3]
list2 = [4, 5, 6]
list3 = [7, 8, 9]
result = list(map(lambda x, y, z: math.fsum([x, y, z]), list1, list2, list3))
print("Result of adding three lists:", result)
