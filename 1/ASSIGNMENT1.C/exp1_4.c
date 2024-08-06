//area  and perimeter of circle
#include<stdio.h>
#define pi 3.142
int main()
{
    int area_circle,peri_circle,r;
    printf("\nEnter for radius:");
    scanf("%d",&r);
    area_circle=pi*r*r;
    peri_circle=2*pi*r;
    printf("The area and perimeter of circle:%d :%d",area_circle,peri_circle);
    return 0;
}