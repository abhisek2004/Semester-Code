#include<stdio.h>
int main()
{
    int x[3][3]={[1,2,3],{4,5,6},{7,8,9}};
    int i,j,fd=0,rd=0;
    printf("\nMatrix is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",x[i][j]);
        }
        fd=fd+x[i][i];
        rd=rd+x[i][3-i-1];
        printf("\n");
    }
    printf("Fd=%d Rd=%d",fd,rd);
    return 0;
}