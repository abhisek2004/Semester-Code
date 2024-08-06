// input a and b to (a+b)^2
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two values:",a,b);
    scanf("%d %d",&a,&b);
    //(a+b)^2=(a+b)*(a+b)
    c=(a+b)*(a+b);
    printf("the given input of the eqution: %d",c);
    return 0;
}