//enter a string and count no of 
//alphabetes, number.
//ex: abcd 123 ef 45
//alphabets:6
//number:5
//assignment 03 07
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int i, alphabets=0, numbers=0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (isalpha(str[i]))
            alphabets++;
        else if (isdigit(str[i]))
            numbers++;
    }
    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of numbers: %d\n", numbers);
    return 0;
}