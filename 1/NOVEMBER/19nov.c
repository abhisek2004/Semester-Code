//WAP TO GENERATE A SERIES OF NO FROM 1 TO 5 USING NESTING OF LOOP
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)//outer loop
    {
        for(j=0;j<5;j++)//inner loop
        {
            printf(" %d ",j);
        }
        printf(" %d ",i);
    }
    return 0;
}