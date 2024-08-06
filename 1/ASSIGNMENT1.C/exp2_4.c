// area of tringle
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s,area;
    printf("Enter for a:");
    scanf("%d",&a);
    printf("Enter for b:");
    scanf("%d",&b);
    printf("Enter for c:");
    scanf("%d",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of tringle:%d",area);
    return 0;
}