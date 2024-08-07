//search for an element present in an array using UDF. If found print element found at index. 
//Else display element not found.
//assignment 03 02
#include <stdio.h>
int array(int);
int main()
{
    int n;
    printf("enter for max:");
    scanf("%d",&n);
    array(n);
}
int array(int n)
{
    int i, arr[n],x,flag=0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("the elements are:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("enter for element to search:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        flag++;     
    }
    if(flag==1)
     printf("\nelement found at%d",i);
        else
        printf("element not found");
}