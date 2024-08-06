#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("\nenter string in lower case");
    scanf("%[^\n]s",str);

    //traverse
    for(i=0;str[i]!='\0';i++)
    {
        printf(" %c ",str[i]-32);
    }
    return 0;
}