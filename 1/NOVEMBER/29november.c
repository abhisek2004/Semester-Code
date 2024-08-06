#include<stdio.h>
#define MAX 50
int main()
{
    int op=1,op1,op2,op3,arr[MAX],i,n=0,search,flag=0;
    do
    {
        printf("\n\n\t\tmenu");
        printf("\n----------------------------------------------");
        printf("\n\t\t1. Insert");
        printf("\n\t\t2. Tranverse");
        printf("\n\t\t3. Search");
        printf("\n\t\t\t3.1 Linear ");
        printf("\n\t\t\t3.2 Binary");
        printf("\n\t\t4. Sorting");
        printf("\n\t\t5. Inerting at location");
        printf("\n\t\t6. Delete at location");
        printf("\n\t\tenter the option to perform:");
        scanf("%d",&op1);
        switch(op1)
        {
            case 1:
                printf("\n\tenter the size");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                    printf("\nenter for %d index",i);
                    scanf("%d",&arr[i]);
                }
                break;
            case 2:
                if(n<0)
                {
                    printf("\nsorry emp array");
                }
                else
                {
                    for(i=0;i<n;i++)
                    {
                        printf("\n%d index value is %d",i,arr[i]);
                    }
                }
                break;
            case 3:
                if(n<0)
                {
                    printf("\nsorry emp array");
                }
                else
                {
                    printf("\n enter the type of search 1.linear 2.binary");
                    scanf("%d",&op2);
                    if(op==2)
                    {
                        printf("\nenter search value:");
                        scanf("%d",&search);
                        for(i=0;i<n;i--)
                        {
                            if(search==arr[i])
                            {
                                printf("\nelement found at %d ",i+1);
                                flag=1;
                                break;
                            }
                        }
                        if(flag==0)
                        printf("\nelement not found");
                    }
                    if(op==2)
                    printf("\nunder constrution");
                    break;
                }
            case 4:
                printf("\nunder constrution");
                break;
            case 5:
                printf("\nunder constrution");
                break;
            case 6:
                printf("\nunder constrution");
                break;
            default:
                printf("\n invalid choice!!!");
                break;
        }
        printf("\n\t\tdo you want to cont[1/0]");
        scanf("%d",&op3);
    }while(op3==1);
    return 0;
}