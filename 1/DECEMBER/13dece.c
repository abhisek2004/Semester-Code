#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("\nEnter the string");
    scanf("%[^\n]s",str);

    printf("\nThe length is :");
    for(i=0;str[i]!='\0';i++);
    printf(" %d ",i);
    return 0;
}