//wap to convert triplet matrox to sparce matrix;
//triplet to sparse matrix
//assignment 03 q07

#include<stdio.h>
triplet_to_sparse(int tp[100][3])
{
   int i,j,k=1;
   for(i=0;i<tp[0][0];i++)
   {
      for(j=0;j<tp[0][1];j++)
      {
         if(tp[k][0]==i&&tp[k][1]==j)
         {
            printf("%d",tp[k][2]);
            k++;
         }
         else
         {
            printf("0");
         }
      }
   }
}
int main()
{
   int sp[50][50],tp[100][3],i,j;
   printf("enter the n0. of row,colomn and non zero element : ");
   scanf("%d %d %d",&tp[0][0],&tp[0][1],&tp[0][2]);
   printf("enter the row and colomn of non zero element and the element : ");
   for(i=1;i<=tp[0][2];i++)
   {
      for(j=0;j<3;j++)
      {
         scanf("%d",&tp[i][j]);
      }
   }
   printf("\nenter the element of the triplet : ");
   for(i=0;i<=tp[0][2];i++)
   {
      for(j=0;j<3;j++)
      {
         printf("%d",tp[i][j]);
      }
      printf("\n");
   }
   triplet_to_sparse(tp);
}