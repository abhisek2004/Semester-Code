//write a program to 
//array =[2,4,6,8,10]
//give the index no.
//let index=2
//output: 6 8 10 2 4
//assignment02 q=02
#include<stdio.h>
int main()
{
    int i;
    int a[5];
    printf("\nFill the array");
    for(i=0;i<5;i++)
    {
        printf("\nEnter for the %d index : ",i);
        scanf("%d",&a[i]);
    }
    int n;
    printf("\nEnter the index : ");
    scanf("%d",&a);
    for(i=n;i<5;i++)
    { 
        printf("\na[%d]=%d",i,a[i]);
    }
    return 0;
}