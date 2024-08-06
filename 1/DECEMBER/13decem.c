#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("\nEnter the string");
    scanf("%[^\n]s",str);

    printf("\nThe length is :");
    while(str[i++]!='\0');
 
    printf(" %d ",i);
    return 0;
}