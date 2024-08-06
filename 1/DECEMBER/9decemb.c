#include<stdio.h>
int main()

{
    int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};//declaration
    int i,j,l,s;
    printf("The matrix is:\n");
    for(i=0;i<3;i++)//traversing
    {
        for(j=0;j<3;j++)
        {
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
    l=x[0][0];
    s=x[0][0];
    for(i=0;i<3;i++)// compareing
      {
        for(j=0;j<3;j++)
        {
            if(l<x[i][j])
                l=x[i][j];
            if(s>x[i][j])
                l=x[i][j];

        }
      }
      printf("\n largest=%d",l);
      printf("\n smallest=%d",s);
    return 0;
}