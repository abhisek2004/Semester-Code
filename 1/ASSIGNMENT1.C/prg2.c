#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter your num");
    scanf("%d",&num);
    (num%2 == 0)?printf("\nit is a even",num):printf("\nit is a odd",num);
    return 0;
}