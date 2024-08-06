// finding the distance between two point
#include<stdio.h>
#include<math.h>
int main()
{
    int b,c;
    float a;
    printf("entyer for b:");
    scanf("%d",&b);
    printf("enter for c:");
    scanf("%d",&c);
    a=sqrt(b*b+c*c);
    printf("the distance between two points:%f",a);
    return 0;


}