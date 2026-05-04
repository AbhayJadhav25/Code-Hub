/*Accept n integers in array A. Pass this array and two counter variables to a function which
will set the first counter to the total number of even values in the array and the other to the
total number of odd values. Display these counts in main. (Hint: Pass the addresses of the
counters to the function)*/

#include <stdio.h>
#include <stdlib.h>
void counter(int n, int *arr, int *even, int *odd)
{
  *even = 0, *odd = 0;
  for (int i = 0; i < n; i++)
  {
    if (*(arr + i) % 2 == 0)
    {
      (*even)++;
    }
    else
    {
      (*odd)++;
    }
  }
}
int main()
{
  int n;
  printf("Enter size of an array : ");
  scanf("%d", &n);

  int arr[n], even = 0, odd = 0;
  int *p[n];

  printf("Enter %d elements in an array : ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (arr + i));
  }

  counter(n, arr, &even, &odd);
  printf("Total even numbers: %d\n", even);
  printf("Total odd numbers: %d\n", odd);
  return 0;
}