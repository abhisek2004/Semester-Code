//partten print
//assignment 03 q=08


#include<stdio.h>
int isprime(int);
int main()
{
    int i,j,x,k=2;
    printf("enter for row :");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        for(j=0;j<i;j++)
        {
            while(!isprime(k))
            {
                k++;
            }
            printf(" %d",k);
            k++;
        }
        printf("\n");
    }
}
isprime(int num)
{
    int i=2,flag=1;
    for(i;i<num;i++)
    {
        if(num%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}