//deletion of an element form the array based on the input position using udf
//assignment 03 04
#include <stdio.h>
void delete(int arr[],int size, int pos) 
{
    int i; 
    // Shift elements left from the deleted position
    for (i = pos; i < size - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    // Decrease the size of the array by 1
    size--;
    // Print the updated array
    printf("Array after deletion:\n");
    for (i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() 
{
    int arr[100], size, pos, i;
    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Get the elements of the array from the user
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    // Get the position of the element to be deleted from the user
    printf("Enter the position of the element to be deleted (starting from 0): ");
    scanf("%d", &pos);
    // Check if the position is valid
    if (pos < 0 || pos >= size)
    {
        printf("Invalid position.\n");
        return 0;
    }
    // Call the delete function to delete the element
    delete(arr, size, pos);
    return 0;
}