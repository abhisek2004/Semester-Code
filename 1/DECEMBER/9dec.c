#include<stdio.h>
#define r 50
#define c 50
int main()
{
    int a[r][c],m,n,i,j,sum_r[m],sum_c[n],dia=0,revdia=0;
    printf("\n enter for row size:");
    scanf("%d",&m);
    printf("\n enter for the col size:");
    scanf("%d",&n);
    printf("\n fill the array \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("\n the values are\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");

    }
    //sum of row and col wise
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum_r[i]=sum_r[i]+a[i][j];
            sum_c[i]=sum_c[i]+a[j][i];

        }
        printf("%d",sum_r[i]);
        printf("%d",sum_c[i]);
        printf("\n");
    }
    return 0;
}