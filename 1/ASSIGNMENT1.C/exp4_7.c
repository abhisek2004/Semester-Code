// using bitwise 
#include<stdio.h>
int main()
{
    int x,y,z,p,q,r;
    printf("enter for x,y,z:");
    scanf("%d %d %d",&x,&y,&z);
    p=x++ + y++ + z;
    q= x-- + --y + z++;
    r= ++p + ++q;
    printf("the the val:%d %d %d",p,q,r);
}