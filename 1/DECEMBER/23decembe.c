
#include<stdio.h>
void fact();
int main()
{  
    fact();
    fact();
    fact();
    return 0;
}

    void fact()
{
    int x,y,z;
    printf("\nEnter for x,y");
    scanf("%d %d",&x,&y);
    z=x+y;
    printf("sum of %d - %d = %d",x,y,z);
}