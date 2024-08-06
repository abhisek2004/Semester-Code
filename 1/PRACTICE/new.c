#include <stdio.h>
void main()
{   
    printf("value is = %d",(10++));
}
 


 #include<stdio.h>
void main() 
{
 char color;
 clrscr();
 printf("Enter character (W/B/O): ");
 color= getchar();
 switch (color) {
   case 'R':
         printf ("white") ;
         break;
   case 'G':
         printf("blue");
         break;
   case 'B':
         printf("orange");
         break;
  }
 getch();
}