//WAP TO GENERATE THE FOLLOWING PATTERN
123
1234
12345
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,row;
    clrscr();
    printf("\nHow many rows\n");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
}