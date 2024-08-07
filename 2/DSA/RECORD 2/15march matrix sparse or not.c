//wap to input elements into a 4*4 matrix,check it for sparse or not. If sparse then store the non zero elements into an alternating martix and then display it using UDF.
//assignment 02 q10
#include <stdio.h>
// Function to display matrix
void displayMatrix(int mat[][4], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
int main()
{
    int mat[4][4];
    int i, j, count = 0;
    // Taking input from user
    printf("Enter elements of matrix:\n");
    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] != 0)
                count++;
        }
    }
    // Checking if matrix is sparse
    if (count < 4 * 4 / 2) 
    {
        printf("Matrix is sparse\n");
        // Creating alternating matrix
        int altMat[count][3], k = 0;
        for (i = 0; i < 4; i++) {
            for (j = 0; j < 4; j++)
            {
                if (mat[i][j] != 0) 
                {
                    altMat[k][0] = i;
                    altMat[k][1] = j;
                    altMat[k][2] = mat[i][j];
                    k++;
                }
            }
        }
        // Displaying alternating matrix using UDF
        printf("\nAlternating Matrix:\n");
        for (i = 0; i < count; i++) 
        {
            for (j = 0; j < 3; j++)
                printf("%d ", altMat[i][j]);
            printf("\n");
        }
    } 
    else 
    {
        printf("Matrix is not sparse\n");
        printf("\nOriginal Matrix:\n");
        displayMatrix(mat, 4, 4);
    }
    return 0;
}