///wap to join to string & print the concated string using loop
#include<stdio.h>
#include<conio.h>
int main()
{
    char x[10],y[10],z[20];
    int i,j,k=0;
    printf("\nEnter str1 and str2");
    printf("\nenter str2");
    printf("\nstr1 is %s",x);
    gets(x);
    printf("\nstr2 is %s",y);
    gets(y);
    for(i=0;x[i]!='\0';i++);
    {
        z[k]=x[i];
        k++;
    }
    for(j=0;y[j]!='\0';j++)
    {
        z[k]=y[j];
        k++;
    }
    z[k]='\0';
    printf("\n str3 is :%s",z);

    return 0;
}