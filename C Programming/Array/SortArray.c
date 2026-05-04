#include <stdio.h>

void sortedArray(int arr[], int length)
{
  for (int i = 0; i < length - 1; i++)
  {
    for (int j = i + 1; j < length; j++)
    {
      if (arr[i] > arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  printf("Sorted array:\n");
  for (int i = 0; i < length; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  int n;
  printf("Enter size of the array: ");
  scanf("%d", &n);

  int arr[n]; // Valid in C99 and later
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  sortedArray(arr, n);
  return 0;
}