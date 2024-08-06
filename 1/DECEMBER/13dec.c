#include<stdio.h>
int main()
{
    char s[10]="string";
    int i;
    //char s[10];
    //s="string" invalid
    char s1{10}={'s','t','r','i','n','g','1'};
    printf("\nEnter a string");
    scanf("%[^\n")

    i=0;
    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        i=i+1;
    }
    printf("\n%s",s);//using formated spesifier
    i=0;
    {
        printf("\n%s",s1[i]);
        i++;
    }
    return 0;
}