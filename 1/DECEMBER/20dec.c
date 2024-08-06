///wap to accept a string & copy into another string using loop control
#include<stdio.h>
int main()
{
    char ch[200],ch1[200];
    int i;
    printf("\nEnter the string1");
    scanf("%[^\n]s",ch);
    printf("\n original string is %s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        ch1[i]=ch[i];
    }
    ch1[i]='\0';
    printf("\nThe new string is %s",ch1);
    return 0;
}