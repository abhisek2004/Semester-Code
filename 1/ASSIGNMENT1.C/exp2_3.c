// find simple intrest
#include<stdio.h>
int main()
{
    int p,t,r,si;
    printf("Enter for p:");
    scanf("%d",&p);
    printf("Enter for t:");//r in years
    scanf("%d",&t);
    printf("Enter for r:");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("si value:%d",si);
    return 0;
}