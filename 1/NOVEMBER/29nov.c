//WAP TO CREATE AN ARRAY OF INTEGER TYPE WITH SIZE 50 & PERFORM THE FOLLOWING OPERATION IN ARRAY???
#include <stdio.h>
#define max 50
int main()
{
    int arr[max], i, flag = 0, n=0, op = 1, op1 = 1, op2 = 1;
    do
    {
        printf("\n\t\t Menu for Array opration");
        printf("\n\t\t_________________________");
        printf("\n\t 1. insert")
        printf("\n\t 2. traversal");
        printf("\n\t 3. search");
        printf("\n\t  a.linear search");
        printf("\n\t  b.binary search");
        printf("\n\t 4. sorting element");
        printf("\n\t 5. inserting ");
        printf("\n\t 6. delete");
        printf("\n\t enter your option ");
        scanf("%d",op1);
        switch (op1)
        {
        case 1:
             printf("\n\n enter the size");
             scanf("%d",&n);
             for(i=0;i<n;i++);
             {
                printf("\n\tenter for %d index",i);
                scanf("%d",arr[i]);
             }
            break;
        case 2:
            if(n<0)
            {
                printf("\n sorry emp array ");
            }
            else
            {
                for(i=0;i<n;i++);
                printf("\n %d index values is %d",i,arr[i]);
            }
        default:
            break;
        case 3:
            if(n<o)
            {
                printf("nSorry Emp array");
            }       
            else
            {
                printf("\nEnter the type of search 1.Linear 2.binary");
                scanf("%d,&op2");
                if(op==2)
            {
                if (search == arr[i])
        {
            printf("\n%d found at %d location", search, i + 1);
            flag = 1;
            break;
        }
        if (flag == 0)
            printf("\n %d not found", search);
            }
        }
        if(op==2)
            printf("\n page under construction");
            break;
        case 4;
            printf("\n under construction");
            break;
        case 5;
            printf("\nunder construction");
            break;
        case 6;
            printf("\nunder constructio");
            break;
        default:
            printnf("\Invalid choice!!!");
            break;
        }
        printf("\n\t\tdo you want to count[1/0]");
        scanf("%d",&op3);        
    }
    while (op3 ==1);
    return 0;
}