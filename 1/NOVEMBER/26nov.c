//WAP TO CREATE ARRAY OF INT TYPE AND STORE 5 ELEMENT &TRAVERSE THE GIVEN ARRAY???
#include<stdio.h>
#define MAX 50
int main()
{
    int arr[MAX], i,n;
    printf("\nEnter the max size ofc array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         printf("\nEnter the %d index",i);
        scanf("%d" ,&arr[i]);
    }
    printf("\nThe value are");
    for(i=0;i<n;i++)
    {
        printf("\narr[%d]=%d",i,arr[i]);
    }
    return 0;
}