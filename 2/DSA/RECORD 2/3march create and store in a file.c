//WAP 
//04 assignment02
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    int n,num1,num2,i,sum=0;
    fp=fopen("abc.txt","r");
    fscanf(fp,"%d",&n);
    for(i=0;i<10;i++)
    {
        fscanf(fp,"%d",&num1);
        fscanf(fp,"%d",&num2);
        sum=sum+num1+num2;
        printf("%d\n",sum);
    }
}