//transpose of martix using array in file
//assignment02 q=07
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    FILE *fp;
    fp=fopen("abc.txt","w");
    int i,j,m,n,A[100][100],B[100][100];
    srand(time(0));
    printf("enter the number of rows\n");
    scanf("%d",&m);
    printf("enter the number of columns\n");
    scanf("%d",&n);
    fprintf(fp,"%d\n",m);
    fprintf(fp,"%d\n",n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        int x=rand()%10;
        fprintf(fp,"%d ",x);
        A[i][j]=x;
    }
        fprintf(fp,"\n");
    }
    printf("The elements of Array are:\n");
        for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
    printf("%d ",A[i][j]);
    }
    printf("\n");
    }
    printf("The transpose of the matrix A is :\n");
    fprintf(fp,"The transpose of the matrix A is :\n");
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
    B[j][i]=A[i][j];
    }
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
    printf("%d ",B[i][j]);
    fprintf(fp,"%d ",B[i][j]);
    }
    printf("\n");
    fprintf(fp,"\n");
    }
}