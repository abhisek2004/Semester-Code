#include<stdio.h>
#define pi 3.14
int main ()
{
    float r,dist,disp;
    printf("enter for radius:");
    scanf("%f",&r);
    dist=pi*r;
    disp=2*r;
    printf("\ndistance of the ground:%f",dist);
    printf("\nthe displacement cover by boy:%f",disp);
    return 0;
}