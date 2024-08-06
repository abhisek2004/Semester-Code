#include<stdio.h>
int main()
{
    char str[10];
    int i;
    printf("\nenter the string: ");
    scanf("%[^\n]s",str);
    for(i=0;str[i]!=0;i=i+2)
    {
        
         printf("\n%c",str[i]);
        
    }
    printf("\n\n");
    return 0;

}
