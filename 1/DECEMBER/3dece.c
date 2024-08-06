#include<stdio.h>
int main()
{
    int m[2][2] = { { 1 , 2 } , { 3 , 4 } };
    printf("%d address: %d %d address: %d", m[0][0] , &m[0][0] , m[0][1] , &m[0][1] );
    printf("\n%d address: %d %d address: %d", m[1][0] , &m[1][0] , m[1][1] , &m[1][1] );
    return 0;
}
