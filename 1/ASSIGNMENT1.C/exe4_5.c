//input age of two person
#include<stdio.h>
int main()
{
    int x,y,r;
    printf("enter age:");
    scanf("%d",&x);
    printf("enter age:");
    scanf("%d",&y);
    r=(x>y)?x:y;
    printf("enter elder:%d",r);
    return 0;
} 
