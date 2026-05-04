// Check number is prime or not
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
  int num;
  bool isPrime = true;
  printf("Enter any number : ");
  scanf("%d", &num);

  for (int i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
    {
      isPrime = false;
      break;
    }
  }
  if (isPrime)
  {
    printf("%d is prime number\n", num);
  }
  else
  {
    printf("%d is not a prime number", num);
  }
  return 0;
}