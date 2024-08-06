#include <stdio.h>
#define N 10
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main(void) 
{
  int arr[N];
  printf("Enter %d integers: \n", N);
  for (int i = 0; i < N; i++) 
  {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < N - 1; i++) 
  {
    for (int j = 0; j < N - i - 1; j++) 
    {
      if (arr[j] > arr[j + 1]) 
      {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
  printf("Sorted list in ascending order: \n");
  for (int i = 0; i < N; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}