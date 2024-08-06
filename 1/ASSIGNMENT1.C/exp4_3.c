//input two integer value
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter for a");
    scanf("%d",&a);
    printf("enter for b");
    scanf("%d",&b);
    c=a+b;
    printf("\nthe sum of two value %d",c);
    c=a-b;
    printf("\nthe sub of two value %d",c);
    c=a*b;
    printf("\nthe mul of two value %d",c);
    c=a/b;
    printf("\nthe div of two value %d",c);
    c=a%b;
    printf("\nthe mod of two value %d",c);
    c=a>b;
    printf("\nthe gre of two value %d",c);
    c=a<b;
    printf("\nthe les of two value %d",c);
    return 0;
}