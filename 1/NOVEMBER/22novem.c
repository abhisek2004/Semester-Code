#include <stdio.h>
int main()
{
    int i, j;
    i = 5;
    while (i >= 1)
    {
        j = 1;
        while (j <= i)
        {
            printf(" * ", i);
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}