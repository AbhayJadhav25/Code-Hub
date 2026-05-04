// Print prime numbers from 1 to n
#include <stdio.h>
#include <math.h>
int main()
{
  int num, isPrime, i;
  printf("Enter any number : ");
  scanf("%d", &num);

  for (i = 2; i <= num; i++)
  {
    isPrime = 1;
    for (int j = 2; j <= sqrt(i); j++)
    {
      if (i % j == 0)
      {
        isPrime = 0;
        break;
      }
    }
    if (isPrime == 1)
    {
      printf("%d\n", i);
    }
  }
  return 0;
}