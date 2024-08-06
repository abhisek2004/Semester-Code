// input marks of3 subjest
#include<stdio.h>
#define tm 120
int main()
{
    
    float mat,che,phy,mo,per;
    printf("enter for 3 subject:");
    scanf("%f %f %f",&mat,&che,&phy);
    mo=mat+che+phy;
    printf("the value%f",mo);
    per=mo/tm*100;
    printf("the per:%f",per);
    return 0;
}