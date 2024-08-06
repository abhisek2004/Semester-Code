// far to cel
#include<stdio.h>
int main()
{
    float far,cel;
    printf("enter for far:");
    scanf("%f",&far);
    cel=((far-32)*5/9);
    printf("the value of cel:%.2f",cel);
    return 0;
}