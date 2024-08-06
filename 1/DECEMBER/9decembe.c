#include<stdio.h>
#define R 50
#define C 50
int main()
{
    int a[R][C],m,n,i,j;
    int sum_r[R], sum_c[C],dia=0,revdia=0;
    printf("\nenter the row size");
    scanf("%d",&R);
    printf("\nenter the col wise: ");
    scanf("%d",&C);
    printf("\n fill the array \n");
    for(i=0;i<m;i++)
    {
        for(j=0;J<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nthe values are\n");
    for(i=0;i<m;++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}