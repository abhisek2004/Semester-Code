//make a menu driven program and combine all the functions mentioned above. 
//assignment 03 06
#include <stdio.h>
// Function prototypes
void addNumbers();
void subtractNumbers();
void multiplyNumbers();
void divideNumbers();
int main() 
{
    int choice;    
    do 
    {
        // Display menu options
        printf("\n");
        printf("1. Add numbers\n");
        printf("2. Subtract numbers\n");
        printf("3. Multiply numbers\n");
        printf("4. Divide numbers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Execute the selected function
        switch (choice) 
        {
            case 1:
                addNumbers();
                break;
            case 2:
                subtractNumbers();
                break;
            case 3:
                multiplyNumbers();
                break;
            case 4:
                divideNumbers();
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } 
    while (choice != 5);
    return 0;
}
// Function to add two numbers
void addNumbers() 
{
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 + num2;
    printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
}
// Function to subtract two numbers
void subtractNumbers() 
{
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 - num2;
    printf("The difference between %.2lf and %.2lf is %.2lf\n", num1, num2, result);
}
// Function to multiply two numbers
void multiplyNumbers() 
{
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 * num2;
    printf("The product of %.2lf and %.2lf is %.2lf\n", num1, num2, result);
}
// Function to divide two numbers
void divideNumbers() 
{
    double num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    if (num2 == 0) 
    {
        printf("Error: Division by zero\n");
    } else 
    {
        result = num1 / num2;
        printf("%.2lf divided by %.2lf is %.2lf\n", num1, num2, result);
    }
}