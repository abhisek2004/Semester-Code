#include<stdio.h>
int main()

{
    int s[3][2][3]={ { {22,23,24},{21,22,21}},{{23,24,25},{23,23,23}},{{21,0,22},{21,0,0}}};
    int i,j,k;
   for(i=0;i<3;i++)//outrmost table traver
   {
    printf("Table no %d\n",i+1);
    for(j=0;j<2;j++)//inner row traverse
   {
     for(k=0;k<3;k++)//innermost col traverse
     {
        printf(" %d ",s[i][j][k]);
     }
     printf("\n");
   }
   printf("\n\n");
   }
   return 0;
}