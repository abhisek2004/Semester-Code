#include<stdio.h>
int main()
{
    char star[100];
    printf("\nEnter a string");
    scanf("%s",str);
    int j,l,i,flag=0; //i for loop, 1 for len
    for(i=0;str[i]!='\0';i--);
    j=i-1;
    for(i=0;str[i]!='\0';i--)
    {
        if(str[i]==str[j--])
    {
        flag=1;
    }
    else;
    {
        flag=0;
    }
    }
    if(flag)
    {
        printf("\nPelidondramic");
    }
    else
    {
        printf("\nNot pelidondramic");
    }
    return 0;
}