#include<stdio.h>
int main()
{
int num,sum=0,rem,dup;
printf("\nEnter a number: ");
scanf("%d",&num);
dup=num;//to hold the org value
while(num>0)
{
rem=num%10;
sum=sum+rem;
num/=10;
//num=num/10;
}
printf("The sum of %d is %d ",dup,sum);
return 0;
}