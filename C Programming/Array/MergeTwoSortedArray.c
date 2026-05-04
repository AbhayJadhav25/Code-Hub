#include <stdio.h>

void mergeArray(int arr1[], int arr2[], int n1, int n2)
{
  int arr3[n1 + n2];

  int i = n1 - 1;
  int j = n2 - 1;
  int k = n1 + n2 - 1;

  while (i >= 0 && j >= 0)
  {
    if (arr1[i] > arr2[j])
      arr3[k--] = arr1[i--];
    else
      arr3[k--] = arr2[j--];
  }

  while (i >= 0)
    arr3[k--] = arr1[i--];

  while (j >= 0)
    arr3[k--] = arr2[j--];

  printf("\nMerged array: ");
  for (int x = 0; x < n1 + n2; x++)
    printf("%d ", arr3[x]);
  printf("\n");
}

int main()
{
  int n1, n2;
  printf("Enter size of arr1 and arr2: ");
  scanf("%d %d", &n1, &n2);

  int arr1[n1], arr2[n2];

  printf("Enter %d elements in array 1 (sorted ascending): ", n1);
  for (int i = 0; i < n1; i++)
    scanf("%d", &arr1[i]);

  printf("Enter %d elements in array 2 (sorted ascending): ", n2);
  for (int i = 0; i < n2; i++)
    scanf("%d", &arr2[i]);

  mergeArray(arr1, arr2, n1, n2);
  return 0;
}
