// Print table of any number
#include <stdio.h>
int main()
{
  int num;
  printf("Enter any number : ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++)
  {
    printf("%d * %d = %d \n", num, i, (num * i));
  }
  return 0;
}