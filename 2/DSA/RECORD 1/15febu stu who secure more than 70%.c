//03 update the last program by display the student who secure more than 70%
//assignment 1
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
}