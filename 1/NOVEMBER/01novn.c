#include<stdio.h>
int main()
{
   char name[30];
   char gen;
   int roll;
   float dues;
   float tot=100000;
   printf("\nenter for all details(with space):");
   scanf("%c",&gen);
   printf("\nEnter the roll");
   scanf("%d",&roll);
   printf("\nEnter the dues");
   scanf("%f",&dues);
   printf("\nEnter the name");
   scanf("%[^\n]s",name);
   ((dues>tot)/2)?printf("\n you have more then 50 of dues"):printf("\n you have cleard the dues");
   printf("\nname=\t%s",name);
   printf(" \ngen=\t%c",gen);
   printf("\nroll=\t%d",roll);
   printf("\ndues=\t%f",dues);
    return 0;

}