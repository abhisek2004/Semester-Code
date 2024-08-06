//wap to print string palandromic
#include <stdio.h>
#include <string.h>
int check(char[]);
char main()
{
    char arr[20];
    int r;
    printf("enter for string ");
    scanf("%s", arr);
    r = check(arr);
    if (r == 0)
        printf("\n %s is an palandromic",arr);
    else
        printf("not palandromic");
}
int check(char a[])
{
    char b[20];
    strcpy(b, a);
    strrev(b);
    return strcmp(a,b);
}