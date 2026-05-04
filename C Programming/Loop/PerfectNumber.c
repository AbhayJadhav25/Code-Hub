// Display all perfect numbeer below 500 hundred
#include <stdio.h>
int main()
{
  int range;
  printf("Enter Range : ");
  scanf("%d", &range);
  for (int i = 1; i <= range; i++)
  {
    int sum = 0;
    for (int j = 1; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        sum += j;
      }
    }
    if (i == sum)
    {
      printf("%d  ", i);
    }
  }
  return 0;
}

// Check number is perfect or not
/*#include <stdio.h>
#include <math.h>
int main()
{
  int num, sum = 0;
  printf("Enter any number : ");
  scanf("%d", &num);

  for (int i = 1; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      sum += i;
    }
  }
  if (sum == num)
  {
    printf("%d is perfect number ", num);
  }
  else
  {
    printf("%d is not a perfect number", num);
  }
  return 0;
}*/