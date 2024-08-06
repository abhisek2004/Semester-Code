#include<stdio.h>
int main()
{
    int x[10], 1b, ub, mid, flag=0, i, search;
    printf("\nEnter the element into array in assending order:");
    //array filling
    for(i = 0; i < 10; i++)
    {
        printf("\nEnter for %d index",i);
        scanf("%d",&x[i]);
    }
    //traversing the array
    for(i =0; i < 10; i++)
    {
        printf("\n x[%d]=%d", i, x[i]);
    }
    lb = 0;
    ub = i - l;
    mid = (lb + ub)/ 2;
    printf("\nenter the element to search");
    scanf("%d",&search);
    while (lb<ub)
    {
        if(search < x[mid])
        {
            ub= mid - l;
        }
        else if (search==x[mid])
    {
    printf("\nElement found at %d",mid+l);
    break;
    }
    else
    {
        lb=mid+1;
    }
    mid=(lb+ub)/2;
    }
    if(flag==0)
    printf("\nElement not found");
    return 0;
}
