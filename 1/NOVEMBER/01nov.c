#include<stdio.h>
int main()
{
   char name[30];
   char gen;
   int roll;
   float dues;
   float tot=100000;
   printf("\nenter for name,gen,roll,dues");
   scanf("%s %c %d %f",name,&gen,&roll,&dues);
   (dues>(tot)/2)?printf("\n you have more then 50percent of dues"):printf("\n you have cleard the dues");
   printf("\n name=%s",name);
   printf("\ngen=%s",gen);
   printf("\nroll=%d",roll);
    return 0;
}
