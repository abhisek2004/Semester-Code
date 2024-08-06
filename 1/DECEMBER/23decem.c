//udf addition() to find sum of 2 num
#include<stdio.h>
void addition();
int main()
{  
    addition();
    return 0;
}

    void addition()
{
    int x,y,z;
    printf("\nEnter for x,y");
    scanf("%d %d",&x,&y);
    z=x+y;
    printf("sum of %d + %d = %d",x,y,z);
}