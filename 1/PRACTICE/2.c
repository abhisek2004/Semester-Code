// wap to transverse a array useing UDF
#include <stdio.h>
void trans(int[2][2]);
int main()
{
    int i, j;
    int x[2][2];
    printf("enter values for first array:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n enter the values ");
            scanf("%d", &x[i][j]);
        }
    }
    printf(" first array:");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", x[i][j]);
        }
    }
    printf("\n");
    trans(x);
    return 0;
}
void trans(int x[2][2])
{
    int i, j;
    int x1[2][2];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            x1[i][j] = x[j][i];
        }
    }
    printf("transposed values are\n ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", x[i][j]);
        }
        printf("\n");
    }
}