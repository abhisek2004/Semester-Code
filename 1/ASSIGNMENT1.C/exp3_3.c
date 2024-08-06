//find a prrograme two find ci
#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,ci,a,n,R;
    printf("Enter for p:");
    scanf("%f",&p);
    printf("Enter for t:");
    scanf("%f",&t);
    printf("Enter for R:");
    scanf("%f",&R);
    r=R/100;
    printf("Enter for n:");
    scanf("%f",&n);
    a=p*pow((1+(r/n)),n*t);
    printf("the value%f",a);
    ci=a-p;
    printf("the ci value:%f",ci);
    return 0;
}