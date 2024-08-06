#include <stdio.h>
int main(void)
{
    int x = 10, y = 15;
    x ^= y ^= x ^= y;
    printf("%d%d", x, y);
    return 0;
}