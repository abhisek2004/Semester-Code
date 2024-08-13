# wap to print a matrix with summation of row and column ele after entering a 3*3 matrix
matrix = []
print("Enter a 3x3 matrix:")
for _ in range(3):
    row = [int(x) for x in input().split()]
    matrix.append(row)
print("Matrix:")
for row in matrix:
    print(row)
print("\nSum of row elements:")
for i in range(3):
    row_sum = sum(matrix[i])
    print(f"Row {i+1}: {row_sum}")
print("\nSum of column elements:")
for i in range(3):
    col_sum = sum(row[i] for row in matrix)
    print(f"Column {i+1}: {col_sum}")
