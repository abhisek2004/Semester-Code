// area and perimeter of rectangle
#include<stdio.h>
int main()
{
    int area,peri,l,b;
    printf("Enter for length:");
    scanf("%d",&l);
    printf("Enter for breadth:");
    scanf("%d",&b);
    area=l*b;
    peri=2*(l+b);
    printf("The area and peri of rectangle:%d %d",area,peri);
    return 0;
}