#include <stdio.h>

int main()
{  
   float number;
   printf("enter float value:");
   scanf("%d",number);
    int integral = number;
    float fractional = number - integral;
    printf("%d %f\n",integral,fractional);
    return 0;
}