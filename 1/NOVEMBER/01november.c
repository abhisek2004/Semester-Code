#include <stdio.h>
int main()
{
    char s[10];
    printf("\nEnter string");
    scanf("%[^a]s",s);
    printf("\n%s",s);
    return 0;
}