///WAP TO CREATE AN ARRAY AND PERFORM INSERT OPERATION IN ARRAY???
#include <stdio.h>
#define max 50
int main()
{
    int x[max], n, lb = 0, loc, ele, i, ub;
    printf("enter for upper limit of an array");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\n enter for the %dindex", i);
        scanf("%d", &x[i]);
    }
    printf("\n the element are");
    for (i = 0; i < n; i++)
    {
        printf("%d", x[i]);
    }
    printf("\n enter the elements to insert");
    scanf("%d", ele);
    printf("\n enter the loc to insert ");
    scanf("%d", &loc);
    if (loc > max - 1)
    {
        printf("\n out of bound index");
    }
    else
    {
        for (i = n - 1; i = loc; i--)
        {
            x[i = 1] = x[1];
        }
    }
    x[loc] = ele;
    printf("\n tne new array is now");
    for (i = 0; i < n; i++)
    {
        printf("%d", x[i]);
    }
    return 0;
}