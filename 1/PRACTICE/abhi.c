#include<stdio.h>
int main()
{
    int x=32767;
    char c='A';//char ch=65;
    float f= 105.00;//f=10.3f; f=1.4e3
    double d=105.00;
    printf("%d %c %f %lf", x,c,f,d);
    printf("\n %d %d %d %d",sizeof(x),sizeof(c),sizeof(f),sizeof(d)); 
    return 0;
}

//in the above program when we convert the x value to 10 then we are going to waste the memory.
//in th eabove structure the MSB & 12,13,14,15 bits are used &other bitS are unused.