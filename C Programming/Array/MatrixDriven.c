#include <stdio.h>
#define MAX 10
int isSymmetric(int arr[MAX][MAX], int n);
int traceMatrix(int arr[MAX][MAX], int n);
int isUpperTriangular(int arr[MAX][MAX], int n);
int isLowerTriangular(int arr[MAX][MAX], int n);
int isIdentityMatrix(int arr[MAX][MAX], int n);

int main()
{
  int arr[MAX][MAX], rows, choice;

  printf("Enter no of rows :  ");
  scanf("%d", &rows);

  printf("Enter values for %d * %d in matrix : \n", rows, rows);
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < rows; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  do
  {
    printf("====MENU====\n1 : Check if matrix is Symmetric.\n2 : Display tracxe of the matrix\n3 : Check if matrix is Upper Triangular\n4 : Check if matrix is Lower Triangular\n5 : Check if matrix is Identity matrix\n6 : Exit\n");

    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      if (isSymmetric(arr, rows))
      {
        printf("This is Symmetric matrix\n");
      }
      else
      {
        printf("This is not Symmetric matrix\n");
      }
      break;

    case 2:
    {
      int ans = traceMatrix(arr, rows);
      printf("Trace Matrix : %d\n", ans);
      break;
    } 
    case 3:
      if (isUpperTriangular(arr, rows))
      {
        printf("This is Upper Triangular\n");
      }
      else
      {
        printf("This is not Upper Triangular\n");
      }
      break;

    case 4:
      if (isLowerTriangular(arr, rows))
      {
        printf("This is Lower Triangular\n");
      }
      else
      {
        printf("This is not Lower Triangular\n");
      }
      break;

    case 5:
      if (isIdentityMatrix(arr, rows))
      {
        printf("This is Identity Matrix\n");
      }
      else
      {
        printf("This is not Identity Matrix\n");
      }
      break;

    case 6:
      printf("Exit the Program\n");
      break;

    default:
      printf("Invalid Choice\n");
    }
  } while (choice != 6);

  return 0;
}
int isSymmetric(int arr[MAX][MAX], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arr[i][j] != arr[j][i])
      {
        return 0;
      }
    }
  }
  return 1;
}
int traceMatrix(int arr[MAX][MAX], int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        sum += arr[i][j];
      }
    }
  }
  return sum;
}
int isUpperTriangular(int arr[MAX][MAX], int n)
{
  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (arr[i][j] != 0)
      {
        return 0;
      }
    }
  }
  return 1;
}
int isLowerTriangular(int arr[MAX][MAX], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i][j] != 0)
      {
        return 0;
      }
    }
  }
  return 1;
}
int isIdentityMatrix(int arr[MAX][MAX], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j && arr[i][j] != 1)
        return 0;
      else if (i != j && arr[i][j] != 0)
        return 0;
    }
  }
  return 1;
}
