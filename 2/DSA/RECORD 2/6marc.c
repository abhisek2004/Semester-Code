//

#include <stdio.h>
void product(int r1, int r2, int c1, int c2);
int main()
{
    int i, j, k, r1, r2, c1, c2;
    printf("enter for row and column for 1st matrix:");
    scanf("%d %d", &r1, &c1);
    printf("enter for row and column for 2nd matrix:");
    scanf("%d %d", &r2, &c2);
    product(r1, c1, r2, c2);
    return 0;
}
void product(int r1, int r2, int c1, int c2)
{
    int i, j, k;
    float a[10][10], b[10][10], mul[10][10];
    if (c1 == r2)
    {
        printf("enter the element for first matrix :");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("a [%d][%d]=", i, j);
                scanf("%f", &a[i][j]);
            }
        }
        printf("enter the element for second  matrix :");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("a [%d][%d]=", i, j);
                scanf("%f", &b[i][j]);
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < r2; k++)
                {
                    mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("multiplied matrix is :\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%f\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("dimension is not matched !!");
    }
}
#include <stdio.h>
void product(int r1, int r2, int c1, int c2);
int main()
{
    int i, j, k, r1, r2, c1, c2;
    printf("enter for row and column for 1st matrix:");
    scanf("%d %d", &r1, &c1);
    printf("enter for row and column for 2nd matrix:");
    scanf("%d %d", &r2, &c2);
    product(r1, c1, r2, c2);
    return 0;
}
void product(int r1, int r2, int c1, int c2)
{
    int i, j, k;
    float a[10][10], b[10][10], mul[10][10];
    if (c1 == r2)
    {
        printf("enter the element for first matrix :");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("a [%d][%d]=", i, j);
                scanf("%f", &a[i][j]);
            }
        }
        printf("enter the element for second  matrix :");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("a [%d][%d]=", i, j);
                scanf("%f", &b[i][j]);
            }
        }
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < r2; k++)
                {
                    mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("multiplied matrix is :\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%f\t", mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("dimension is not matched !!");
    }
}