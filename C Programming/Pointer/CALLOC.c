// Write a program to allocate memory dynamically for n integers such that the memory is
// initialized to 0. Accept the data from the user and find the range of the data elements.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
  int n;
  printf("Enter Size of array : ");
  scanf("%d", &n);

  int *p;
  p = (int *)calloc(n, sizeof(int));

  if (p == NULL)
  {
    printf("Memory Allocation Failed\n");
    return 1;
  }
  printf("Value at initialized : \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(p + i));
  }
  printf("\n");
  int min = INT_MAX, max = INT_MIN;
  printf("Enter %d elements in array : \n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (p + i));

    if (*(p + i) < min)
    {
      min = *(p + i);
    }

    if (*(p + i) > max)
    {
      max = *(p + i);
    }
  }
  int range = max - min;
  printf("Range : %d\n", range);
  free(p);
  return 0;
}