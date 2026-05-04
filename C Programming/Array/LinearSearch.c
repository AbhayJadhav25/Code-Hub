#include <stdio.h>
int lineraSearch(int arr[], int key, int n)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
      return i + 1;
  }
  return -1;
}
int main()
{
  int n, val;
  printf("Enter size of an array : ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter %d elements in an array : ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Enter Key value to search : ");
  scanf("%d", &val);

  int res = lineraSearch(arr, val, n);
  printf("%d", res);
  return 0;
}