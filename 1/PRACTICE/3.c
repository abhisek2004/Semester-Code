// wap to find the sum of two array useing UDF
#include <stdio.h>
void result(int[2][2], int[2][2]);
int main()
{
    int i, j;
    int x[2][2], y[2][2];
    printf("enter values for first array:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n enter the values ");
            scanf("%d", &x[i][j]);
        }
    }
    printf("enter values for second array:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n enter the values ");
            scanf("%d", &y[i][j]);
        }
    }
    result(x, y);
}
void result(int x1[2][2], int y1[2][2])
{
    int z[2][2], i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            z[i][j] = x1[i][j] + y1[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", z[i][j]);
        }
        printf("\n");
        }
}