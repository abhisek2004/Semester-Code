//input three integers
#include<stdio.h>
int main()
{
    int x,y,z,r1,r2,r3,r4,r5,r6,r7;
    printf("enter for x");
    scanf("%d",&x);
    printf("enter for y");
    scanf("%d",&y);
    printf("enter for z");
    scanf("%d",&z);
    r1=x>y>z;
    printf("%d",r1);
    r2=x<y<=z;
    printf("%d",r2);
    r3=x==y==z;
    printf("%d",r3);
    r4=(x=y>z);
    printf("%d",r4);
    r5=(x==y)&&(y==0);
    printf("%d",r5);
    r6=x=x>>2;
    printf("%d",r6);
    r7=!(x=0);
    printf("%d",r7);
    return 0;
}