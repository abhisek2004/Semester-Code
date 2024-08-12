#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index where key is found
        }
    }
    return -1; // Return -1 if key is not found
}

// Function to perform binary search (array must be sorted in ascending order)
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == key) {
            return mid; // Return the index where key is found
        }
        
        if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    
    // Perform linear search
    int linearIndex = linearSearch(arr, n, key);
    if (linearIndex != -1) {
        printf("Linear Search: Element found at index %d\n", linearIndex);
    } else {
        printf("Linear Search: Element not found\n");
    }
    
    // Perform binary search
    int binaryIndex = binarySearch(arr, 0, n - 1, key);
    if (binaryIndex != -1) {
        printf("Binary Search: Element found at index %d\n", binaryIndex);
    } else {
        printf("Binary Search: Element not found\n");
    }
    
    return 0;
}
