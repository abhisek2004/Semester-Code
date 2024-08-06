// input three unequal
#include<stdio.h>
int main()
{
    int x,y,z,r;
    printf("enter num:");
    scanf("%d",&x);
    printf("enter num:");
    scanf("%d",&y);
    printf("enter num:");
    scanf("%d",&z);
    r=(x>y)?((x>z)?x:z):((y>z)?y:z);
    printf(" the value%d",r);
    return 0;

}
