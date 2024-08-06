//the amount contribute each friends
#include<stdio.h>
int main()
{ 
    int cc,pc,ta,ec;
    printf("cost of chat:",cc);
    scanf("%d",&cc);
    printf("cost of panipuri:",pc);
    scanf("%d",&pc);
    ta=3*cc+2*pc;
    printf("the total amount:%d",ta);
    ec=ta/5;
    printf("\nequal conttribution:%d",ec);
    return 0;
}