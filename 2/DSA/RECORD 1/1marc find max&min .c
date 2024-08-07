//09write a program to create an udf for input 10 number into a 1d array.create two function max() and min()is used to return the largest elements and min() is used to return the smallest number in an array.
//wap to intput 10 numbers into an array and find the maximum and minimum value of the array;
#include<stdio.h>
int max(int []);
int min(int []);
int main()
{
    int x[10],lar,small,i;
    printf("\nFill the Array");
    for(i=0;i<10;i++)
    {
        printf("\nenter for %d index : ",i);
        scanf("%d",&x[i]);
    }
    lar = max(x);
    small = min(x);
    printf("\nSmalleat element is : %d",small);
    printf("\nLargest element is : %d",lar);
    return 0;
}
int max(int x[])
{
    int i,l;
    l=x[0];
    for(i=0;i<10;i++)
    {
        if(l<x[i])
        {
            l=x[i];
        }
    }
    return l;
}
int min(int x[])
{
    int i,m;
    m=x[0];
    for(i=0;i<10;i++)
    {
        if(m>x[i])
        {
            m=x[i];
        }
    }
    return m;
}