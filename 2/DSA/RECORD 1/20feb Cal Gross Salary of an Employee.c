//07 C Program to Calculate Gross Salary of an Employee
#include <stdio.h>
int main()
{
    float basic, ta, da, hra, gross_salary, tax;
    float deduction, net_salary, epf, insurance;

    printf("Enter the basic salary of an employee: ");
    scanf("%f", &basic);

    ta = (basic * 10) / 100;
    da = (basic * 15) / 100;
    hra = (basic * 20) / 100;
    tax = 500;
    epf = (basic * 12) / 100;
    insurance = (basic * 25) / 100;

    gross_salary = basic + da + hra;
    deduction = tax + epf + insurance;
    net_salary = gross_salary - deduction;

    printf("gross salary is %.2f", gross_salary);
    printf("\n The net salary is %.2f", net_salary);

    return 0;
}