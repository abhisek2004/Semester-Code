#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("\nenter string ");
    scanf("%[^\n]s",str);

    //traverse
    for(i=0;str[i]!='\0';i++);
    i--; //i-=1 --i i=i-1
    for(i;i>=0;i--)
        printf(" %c ",str[i]);
    return 0;
}