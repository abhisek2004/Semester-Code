#include<stdio.h>
int main()
{
    int test[3][3]={ {28,29,27},{22,23,22},{29,29,26}};
    int s1=0,s2=0,s3=0,large;
    s1=test[0][0]+test[0][1]+test[0][2];
    s2=test[1][0]+test[1][1]+test[1][2];
    s2=test[2][0]+test[2][1]+test[2][2];
    printf("\n%d %d %d = %d",test[0][0],test[0][1],test[0][2],s1);
    printf("\n%d %d %d = %d",test[1][0],test[1][1],test[1][2],s2);
    printf("\n%d %d %d = %d",test[2][0],test[2][1],test[2][2],s3);
    large=((s1>s2))? ((s1>s3)?s1:s3):((s2>s3)?s2:s3);
    printf("\n Higest mark is %d",large);
    return 0;
}