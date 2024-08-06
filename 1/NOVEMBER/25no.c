#include<stdio.h>
int main()
{
    int a,b,sum=0,n,i;
    printf("enter the num of term");
    scanf("%d",&n);
    a=0;
    b=1;
    sum=a+b;
    printf(" %d %d ",a,b);
    for(i=1;1<n;i++)
    {
        prinf(" %d " ,sum );
        a=b;
        b=sum;
        sum=a+b;
    }
    return 0;
}