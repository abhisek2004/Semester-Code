//swapping of two number without using third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter for two number",a,b);
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapping of two number:%d %d",a,b);
    return 0;
}
