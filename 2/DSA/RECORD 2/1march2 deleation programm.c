
/*01 assignment02
to perform deleation programm;
*/

#include<stdio.h>
int main()
{
    int i, n, lb=0, loc, t, ub;

    printf("\nEnter the size of the array: ");
    scanf("%d", &n);

    int a[n];
    ub=n-1;

    for(i=0; i<n ; i++)
    {
        printf("\nEnter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        printf("\nThe value of a[%d]: %d", i, a[i]);
    }

    printf("\nEnter the location to delete: ");
    scanf("%d", &loc);

    t=a[loc];

    for(i=loc; i<=ub; i++)
    {
        a[i]= a[i+1];
    }

    printf("\nThe new array: ");

    for(i=0; i<n-1; i++)
    {
        printf("\nThe value of a[%d] : %d", i, a[i]);
    }
    return 0;

}