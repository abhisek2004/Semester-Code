//10 write a c program to create method for operation insertion and display on 1D array of elemrnts using UDF.
//enter an element in a array;
#include<stdio.h>
int main()
{
    int i, num, loc, ub, n;
    printf("\nEnter the size of array: ");
    scanf("%d", &n);
    int a[n];
    ub=n-1;
    for(i=0; i<n; i++)
    {
        printf("\nEnter the size of index %d: ", i);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("\nThe value of a[%d] : %d", i, a[i]);
    }
    printf("\nEnter the location to insert: ");
    scanf("%d", &loc);
    printf("\nEnter the number to input: ");
    scanf("%d", &num);
    for(i=ub; i >= loc; i--)
    {
        a[i=i] = a[i];
    }
    a[loc]= num;
    ub++;
    for(i=0; i<n; i++)
    {
        printf("\nThe value of a[%d] : %d", i, a[i]);
    }
    return 0;
}