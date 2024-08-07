//create an array using UDF
//assignment 03 01
#include <stdio.h>
int array(int);
int main()
{
    int n;
    printf("enter for max");
    scanf("%d", &n);
    array(n);
    return 0;
}
int array(int a)
{
    int i, arr[a];
    for (i = 0; i < a; i++)
    {
        printf("enter the element %d",i);
        scanf("%d", &arr[i]);
    }
    printf("the elements are \n");
    for (i = 0; i < a; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
}