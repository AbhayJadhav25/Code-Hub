// Addition and multiplication of matrix
#include <stdio.h>
void printarr(int rows, int cols, int arr[rows][cols])
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
void input(int rows, int cols, int arr[rows][cols])
{
  printf("Enter valus for %d * %d matrix : \n ", rows, cols);
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}
void addition(int row1, int row2, int col1, int col2, int arr1[row1][col1], int arr2[row2][col2])
{
  if (row1 != row2 || col1 != col2)
  {
    printf("For addition no. of rows and column must be same");
    return;
  }

  int arr3[row1][col1];
  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col1; j++)
    {
      arr3[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
  printf("Addition of Matrix : \n");
  printarr(row1, col1, arr3);
}
void multiplication(int row1, int row2, int col1, int col2, int arr1[row1][col1], int arr2[row2][col2])
{
  if (col1 != row2)
  {
    printf("Can't perform Multiplication operatipon");
    return;
  }
  int arr3[row1][col2];
  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col2; j++)
    {
      arr3[i][j] = 0;
      for (int k = 0; k < col1; k++)
      {
        arr3[i][j] += arr1[i][k] * arr2[k][j];
      }
    }
  }
  printf("Multiplication of matrix : \n");
  printarr(row1, col2, arr3);
}
int main()
{
  int r1, c1;
  int r2, c2;

  printf("Enter no. rows and columns for Array1 : \n");
  scanf("%d%d", &r1, &c1);

  printf("Enter no. rows and columns for Array1 : \n");
  scanf("%d%d", &r2, &c2);

  int arr1[r1][c1], arr2[r2][c2];
  input(r1, c1, arr1);
  input(r2, c2, arr2);

  addition(r1, r2, c1, c2, arr1, arr2);
  multiplication(r1, r2, c1, c2, arr1, arr2);
  return 0;
}