//WAP TO CREATE ARRAY TO STORE 10 ELEMENTS AND FIND AN ELEMENTS FROM THE GIVEN USING LINEAR SEARCH ???
#include<stdio.h>
#define MAX 50
int main()
{
    int arr[MAX], i,n,search,flag=0;
    printf("\nEnter the element to store");
    scanf("%d",&n);
    //array filling
    for(i=0;i<n;i++)
    {
         printf("\nEnter the %d index",i);
        scanf("%d" ,&arr[i]);
    }
    //traversing
    for(i=0;i<n;i++)
    {
        printf("\narr[%d]=%d",i,arr[i]);
        //array[i]     *(arr+i)     *(&arr[i])     
    }
    //enter teh search element
    printf("\nEnter the no to search");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(search==arr[i])
        printf("\n%d found at %d location",search,i+1);
        flag=1;
        break;        
    }
    if(flag==0)
    printf("\n%d not found",search);
    return 0;
}