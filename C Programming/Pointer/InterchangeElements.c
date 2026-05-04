#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n;
  printf("Enter number of elements for both array : ");
  scanf("%d", &n);

  int a[n], b[n];
  int *p1[n], *p2[n];

  printf("Enter %d elements in First array : \n ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (a + i));
  }

  printf("Enter %d elements in Second array : \n ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (b + i)); // &b[i] = (b+i) && b[i] = *(b+i)
  }

  for (int i = 0; i < n; i++)
  {
    *(p1 + i) = (a + i);
    *(p2 + i) = (b + i);
  }

  printf("Before Swapping : \n");
  for (int i = 0; i < n; i++)
  {
    printf("a[%d] = %d\tb[%d] = %d\n", i, *(*(p1 + i)), i, *(*(p2 + i)));
  }

  int *temp;
  for (int i = 0; i < n; i++)
  {
    temp = *(p1 + i);
    *(p1 + i) = *(p2 + i);
    *(p2 + i) = temp;
  }

  printf("After Swapping : \n");
  for (int i = 0; i < n; i++)
  {
    printf("a[%d] = %d\tb[%d] = %d\n", i, *(*(p1 + i)), i, *(*(p2 + i)));
  }

  return 0;
}