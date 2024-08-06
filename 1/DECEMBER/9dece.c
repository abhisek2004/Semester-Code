#include<stdio.h>
int main()
{
    int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};//declaration
    int i,j,l,s,ele,flag=0;
    printf("The matrix is:\n");
    for(i=0;i<3;i++)//traversing
    {
        for(j=0;j<3;j++)
        {
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
    
      printf("\n entre the element to search :");
      scanf("%d",&ele);
      //traverse
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
            if(ele==x[i][j])
            {
                printf("element found at x[%d][%d]",i+1,j+1);
                flag=1;
                break;

            }
        }
      }
      if(flag==0)
      {
        printf("\n element not found");
      }
    return 0;
}