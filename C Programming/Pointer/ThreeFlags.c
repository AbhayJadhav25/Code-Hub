/*Write a function which accepts a number and three flags as parameters. If the number is
even, set the first flag to 1. If the number is prime, set the second flag to 1. If the number is
divisible by 3 or 7, set the third flag to 1. In main, accept an integer and use this function to
check if it is even, prime and divisible by 3 or 7. (Hint : pass the addresses of flags to the
function) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void check(int num, int *flag1, int *flag2, int *flag3)
{
  *flag1 = 0, *flag2 = 1, *flag3 = 0;
  if (num % 2 == 0)
  {
    (*flag1) = 1;
  }
  if (num % 3 == 0 || num % 7 == 0)
  {
    (*flag3) = 1;
  }

  for (int i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
    {
      (*flag2) = 0;
      break;
    }
  }
}
int main()
{
  int num;
  printf("Enter Number : ");
  scanf("%d", &num);

  int flag1, flag2, flag3;

  check(num, &flag1, &flag2, &flag3);

  if (flag1 == 1)
  {
    printf("%d is Even Number\n", num);
  }
  else
  {
    printf("%d is odd Number\n", num);
  }

  if (flag2 == 1)
  {
    printf("%d is Prime Number\n", num);
  }
  else
  {
    printf("%d is not prime Number\n", num);
  }

  if (flag3 == 1)
  {
    printf("%d is Divisible by 3 or 7\n");
  }
  else
  {
    printf("%d is not Divisible by 3 or 7\n");
  }
  return 0;
}