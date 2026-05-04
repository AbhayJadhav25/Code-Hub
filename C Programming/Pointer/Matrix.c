#include <stdio.h>
#include <stdlib.h>
int main()
{
  int row, column;
  printf("Enter no. of rows : ");
  scanf("%d", &row);

  printf("Enter no. of column : ");
  scanf("%d", &column);

  int **matrix = (int **)malloc(row * sizeof(int *));
  if (matrix == NULL)
  {
    printf("Memory Allocation failed..");
    return 1;
  }

  for (int i = 0; i < row; i++)
  {
    matrix[i] = (int *)malloc(column * sizeof(int));
    if (matrix[i] == NULL)
    {
      printf("Allocation Failed");
    }
  }

  printf("Enter Values in %d * %d Matrix : ", row, column);
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  printf("Matrix : \n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < row; i++)
  {
    free(matrix[i]);
  }

  free(matrix);
  return 0;
}