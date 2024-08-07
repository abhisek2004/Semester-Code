//06 add two complex no using structure
#include <stdio.h>
struct complex
{
    float real;
    float imag;
};
int main()
{
    struct complex x, y, temp;
    printf("enter for first complex number:");
    printf("enter integer and imaginary part:");
    scanf("%f %f", &x.real, &x.imag);
    printf("enter for second complex number:");
    printf("enter integer and imaginary part:");
    scanf("%f %f", &y.real, &y.imag);
    temp.real = x.real + y.real;
    temp.imag = x.imag + y.imag;
    printf("Sum = %.1f + %.1fi", temp.real, temp.imag);
    return 0;
}