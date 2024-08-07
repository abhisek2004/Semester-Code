//04update the last program by sorting their name according to their age
#include<stdio.h>
struct student
{
    char name[50];
    char branch[20];
    int age;
    float marks;
};
int main()
{
    struct student ob[10], temp;
    int i, j,n;
   printf("Enter n:\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name, branch,age and marks of student:\n");
        scanf("%s%s%d%f", ob[i].name, ob[i].branch, &ob[i].age, &ob[i].marks);
    }
   for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ob[i].marks > ob[j].marks)
            {
                temp = ob[i];
                ob[i] = ob[j];
                ob[j] = temp;
            }
        }
    }
     printf("Sorted records are:\n");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s\n", ob[i].name);
        printf("Branch: %s\n", ob[i].branch);
        printf("Age:%d\n",ob[i].age);
        printf("Marks: %0.2f\n\n", ob[i].marks);
    }
    return 0;
}