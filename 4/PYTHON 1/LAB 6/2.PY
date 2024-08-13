# wap to print a transpose of a matrix of n*n order

n = int(input("Enter the order of the square matrix: "))
matrix = []
print("Enter the elements of the matrix:")
for i in range(n):
    row = []
    for j in range(n):
        element = int(
            input("Enter element at position ({}, {}): ".format(i, j)))
        row.append(element)
    matrix.append(row)
print("Original Matrix:")
for i in range(n):
    for j in range(n):
        print(matrix[i][j], end=" ")
    print()
print("Transpose of the matrix:")
for i in range(n):
    for j in range(n):
        print(matrix[j][i], end=" ")
    print()
