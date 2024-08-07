//05 display the class of an IP addess
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ip[20];
    char *oct1,*oct2,*oct3,*oct4;
    int o1,o2,o3,o4,len,i,count=0;
    printf("enter the ip adress");
    scanf("%s",ip);
    len=strlen(ip);
    for(i=0;i<len;i++)
    {
        if(ip[i]=='.')
        count++;
    }
    if(count!=3)
    {
        printf("%d",count);
        printf("invalid ip");
        exit(0);
    }
    oct1=strtok(ip,".");
    printf("\n%s",oct1);
    oct2=strtok(NULL,".");
    printf("\n%s",oct2);
    oct3=strtok(NULL,".");
    printf("\n%s",oct3);
    oct4=strtok(NULL,".");
    printf("\n%s",oct4);  
    o1=atoi(oct1);
    o2=atoi(oct2);
    o3=atoi(oct3);
    o4=atoi(oct4);
    if(o1>255 || o2>255 || o3>255 || o4>255)
    printf("invalid ip");
    if(o1>=0 && o1<=127)
    printf("CLASS A");
    else if(o2>=128 && o1<=191)
    printf("CLASS B");
}