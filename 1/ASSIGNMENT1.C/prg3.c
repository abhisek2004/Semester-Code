#include<stdio.h>
int main()
{
    int x,y,z,r;
    printf("\nenter for x,y,z");
    scanf("%d%d%d",&x,&y,&z);
    r= (x>y)?((x>z)?x:z):((y>z)?y:z);
    printf("the largest = %d",r);
    return 0;
}