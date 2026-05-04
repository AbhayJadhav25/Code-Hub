#include <stdio.h>
#include <stdlib.h>
int main()
{

  int posNum = 0, negNum = 0;
  int arr[10];
  printf("Enter 10 Numbers in an array  ");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] >= 0)
      posNum++;
    else
      negNum++;
  }

  int *positive = (int *)malloc(posNum * sizeof(int));
  int *negative = (int *)malloc(negNum * sizeof(int));

  if (positive == NULL || negative == NULL)
  {
    printf("Memory allocation failed\n");
  }

  int posIndex = 0, negIndex = 0;
  for (int i = 0; i < 10; i++)
  {
    if (arr[i] >= 0)
      positive[posIndex++] = arr[i];
    else
      negative[negIndex++] = arr[i];
  }

  printf("Positive Number : ");
  for (int i = 0; i < posIndex; i++)
    printf("%d ", positive[i]);

  printf("\n");

  printf("Negative Number : ");
  for (int i = 0; i < negIndex; i++)
    printf("%d ", negative[i]);

  free(positive);
  free(negative);

  return 0;
}