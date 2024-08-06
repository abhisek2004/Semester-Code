#include <stdio.h>
int main(void)
{
    int a;
    int i = 4;
    a = 24 || --i;
    printf("%d %d", a, i);
    return 0;
}