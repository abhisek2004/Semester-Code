// inserction sort
//assignment 6 q=2

#include <stdio.h>
int main()
{
    int i, j, temp;
    int a[] = {5, 4, 3, 2, 1};
    for (int i = 1; i < 5; i++)
    {
        temp = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
}