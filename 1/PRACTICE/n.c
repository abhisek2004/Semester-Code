#include<stdio.h>
void main() 
{
 char color;
 printf("Enter character (W/B/O): ");
 color= getchar();
 switch (color) 
{
   case 'W':
         printf ("white") ;
         break;
   case 'B':
         printf("blue");
         break;
   case 'O':
         printf("orange");
         break;
}
}