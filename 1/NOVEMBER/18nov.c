#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum = 0, rem, dup;
    printf("\n Enter a number:");
    scanf("%d", &num);
    dup = num;
    while (num > 0)
    {
        rem= num % 10;
        sum= +pow(rem, 3);
        num /= 10;
    }
    if (dup == sum)
        printf("\n%d is arm ", dup);
    else
        printf("\n%d is not an pal", dup);
    return 0;
}