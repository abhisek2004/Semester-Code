//wap to generate a hundred no from 0 to 999 using random function.
//assignment02  Q03
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int i;
    for(i=0;i<10;i++)
    {
        printf("%d\n",rand()%1000);
    }
}