#include<stdio.h>
int main()
{
    int x,y,z,r;
    printf("enter 3 unequal number");
    scanf("%d%d%d",&x,&y,&z);
if ( (x!=y) && (x!=z) && (y!=z))
    if( (x>y) && (x>z))
            r=x;
    if( (y>x) && (y>z))
            r=y;
    if( (x>y) && (x>z))
            r=z;
    prinf("greater number is%d",r);
    return 0;
}