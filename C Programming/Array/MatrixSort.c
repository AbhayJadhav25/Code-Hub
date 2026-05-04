#include <stdio.h>

void sortRowsAscending(int rows, int cols, int arr[rows][cols])
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols - 1; j++)
    {
      for (int k = j + 1; k < cols; k++)
      {
        if (arr[i][j] > arr[i][k])
        {
          int temp = arr[i][j];
          arr[i][j] = arr[i][k];
          arr[i][k] = temp;
        }
      }
    }
  }
}

void sortColsDescending(int rows, int cols, int arr[rows][cols])
{
  for (int j = 0; j < cols; j++)
  {
    for (int i = 0; i < rows - 1; i++)
    {
      for (int k = i + 1; k < rows; k++)
      {
        if (arr[i][j] < arr[k][j])
        {
          int temp = arr[i][j];
          arr[i][j] = arr[k][j];
          arr[k][j] = temp;
        }
      }
    }
  }
}

void printMatrix(int rows, int cols, int arr[rows][cols])
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int rows, cols;
  printf("Enter number of rows and columns: ");
  scanf("%d %d", &rows, &cols);

  int matrix[rows][cols];

  printf("Enter elements in %d x %d matrix:\n", rows, cols);
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &matrix[i][j]);
    }
  }

  sortRowsAscending(rows, cols, matrix);
  printf("\nMatrix after sorting rows in ascending order:\n");
  printMatrix(rows, cols, matrix);

  sortColsDescending(rows, cols, matrix);
  printf("\nMatrix after sorting columns in descending order:\n");
  printMatrix(rows, cols, matrix);

  return 0;
}
