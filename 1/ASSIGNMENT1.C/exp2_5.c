// swapping of two numbers using third variable
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two num:",a,b);
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the swappint of two values%d %d",a,b);
    return 0;
}