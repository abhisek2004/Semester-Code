#include<stdio.h>
int main()
{
    int n,fact=1,i;

    printf("\nenter the num:");
    sacnf("%d",&n);
    for (n; n >=1; n--)
    {
        fact = fact * n;
    }
    printf("\nthe fact of %d =%d" ,n,fact);
    return 0;
}