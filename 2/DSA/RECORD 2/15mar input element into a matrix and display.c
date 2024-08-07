//wap to perform to input element into a 3*4 matrix and display the sum of individual row elements.
//assignment 2 q8
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
    for(i=0;i<r;i++){
       for(j=0;j<c;j++)
       {
        printf("%d ",a[i][j]);
       }
    }
       printf("\n");
    for(i=0;i<r;i++)
    {
        int sum=0;
       for(j=0;j<c;j++)
        {
            sum+=a[i][j];
            printf("\nthe sum of the elemnnt of the row is : %d",sum);
        }
    }
}