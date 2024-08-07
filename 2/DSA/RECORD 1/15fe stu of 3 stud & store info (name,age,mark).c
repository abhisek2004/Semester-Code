//01create a student structure of 3 student & store information (name,age,mark)
#include <stdio.h>
struct stu
{
    char name[20];
    char branch[10];
    int age;
    int mark;
};
int main()
{

    printf("enter details for 1st student");
    struct stu s1;
    printf("\nenter for name,branch,age,mark:");
    scanf("%s %s %d %d", s1.name, s1.branch, &s1.age, &s1.mark);
    printf("\nenter details for 2nd student");
    struct stu s2;
    printf("\nenter for name,branch,age,mark:");
    scanf("%s %s %d %d", s2.name, s2.branch, &s2.age, &s2.mark);
    printf("\nenter details for 3rd student");
    struct stu s3;
    printf("\nenter for name,branch,age,mark:");
    scanf("%s %s %d %d", s3.name, s3.branch, &s3.age, &s3.mark);
    printf("\n details of first student");
    printf("name:%s,branch:%s,age:%d,mark=%d", s1.name, s1.branch, s1.age, s1.mark);
    printf("\n details of second student");
    printf("name:%s,branch:%s,age:%d,mark=%d", s2.name, s2.branch, s2.age, s2.mark);
    printf("\n details of third student");
    printf("name:%s,branch:%s,age:%d,mark=%d", s3.name, s3.branch, s3.age, s3.mark);
    if (s1.mark > 70)
    {
        printf("%s is obtain above 70", s1.name);
    }
    else if (s2.mark > 70)
    {
        printf("%s is obtain above 70", s2.name);
    }
    else if (s3.mark > 70)
    {
        printf("%s is obtain above 70", s3.name);
    }
    return 0;
}