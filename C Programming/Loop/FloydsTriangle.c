// Print Floyd's Traingle
#include <stdio.h>
int main()
{
  int row = 4, count = 1;
  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= row - i; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= i; j++)
    {
      printf("%d  ", count);
      count++;
    }
    printf("\n");
  }
  return 0;
}