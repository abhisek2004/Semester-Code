//wap to find the two principal diagonal of a square matrix
//assignment 02 q9
//wap to print the diagonal and off diagonal elements;
#include<stdio.h>
void sum();
int main()
{
    int i,j,a[50][50];
    int r,c;
    printf("\nenter row : ");
    scanf("%d",&r);
     printf("\nenter colomn : ");
    scanf("%d",&c);
    printf("\nfill the array");
    for(i=0;i<r;i++)
        {
       for(j=0;j<c;j++)
        {
         printf("\nenter the element : ");
        scanf("%d",&a[i][j]);
        }
        }
    printf("\nthe matrix is\n");
    for(i=0;i<r;i++)
        {
       for(j=0;j<c;j++) 
        {
        printf("%d ",a[i][j]);
        }
       printf("\n");
    }
     printf("\n\n");
       int sum=0;
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
        if(i==j)
        {
            printf("%d ",a[i][j]);
        }
    }
    }
    printf("\n\n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
        if((i + j) == (c - 1))
            printf("%d ",a[i][j]);
       }
    }
    return 0;
}