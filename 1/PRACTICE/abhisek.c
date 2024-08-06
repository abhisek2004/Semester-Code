#include<stdio.h>
int main()
{
    int a,b;
    printf("enter for a");
    scanf("%d",&a);
    printf("enter for b");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nthe value of a=%d b=%d",a,b);
    return 0;
}