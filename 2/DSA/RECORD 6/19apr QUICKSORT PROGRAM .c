//QUICKSORT PROGRAM
//assignment 06 q5
//HERE WE HAVE CHOOSEN THE FIRST ELEMENT OF ARRAY AS PIVOT
#include <stdio.h>
int swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int lb,int ub)
{
    int pivot =a[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    {
    while(a[start]<=pivot)
    {
        start++;
    }
    while(a[end]>pivot)
    {
    end--;
    }
    if(start<end)
    {
    swap(&a[start],&a[end]);
    }
}
    swap(&a[lb],&a[end]);
return end;
}
int quicksort(int a[],int lb,int ub)
{
    if(lb<ub)
    {
    int loc=partition(a,lb,ub);
    quicksort(a,lb,loc-1);
    quicksort(a,loc+1,ub);
}
}
int main()
{
    int a[100],i,n;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements in the array:");
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
    quicksort(a,0,n-1);
    printf("elements after sorting are:");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
return 0;
}