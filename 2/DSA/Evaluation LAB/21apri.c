//Generate  the electric bill . 
//if no of units <100 Rs.5/ units     
//if no. of units >=100 and <200 rs .7/units >=200 Rs . 8/units


#include <stdio.h>

int main()
{
    int units;
    float bill_amount;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if(units < 100)
    {
        bill_amount = units * 5;
    }
    else if(units >= 100 && units < 200)
    {
        bill_amount = units * 7;
    }
    else
    {
        bill_amount = units * 8;
    }

    printf("Electricity Bill = Rs. %.2f", bill_amount);

    return 0;
}