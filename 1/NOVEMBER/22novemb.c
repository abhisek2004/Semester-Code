#include <stdio.h>
int main()
{
    int i=1,num1,num2,gcd;
    printf("\nenter num1 and num2:");
    scanf("%d%d",&num1,&num2);
    for (;i<num1 && i<=num2;)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd=i;
        }
        i++;
    }
     printf("\nThe gcd of %d %d is %d",num1,num2,gcd);
    return 0;
}