// function to check the number is prime or not also print first 10 prime number
#include <stdio.h>
#include <math.h>
int isPrime(int num)
{
  for (int i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  int num, count = 0, n = 2;
  printf("Enter any number : ");
  scanf("%d", &num);
  if (isPrime(num))
  {
    printf("Number is prime number.\n");
  }
  else
  {
    printf("Number is not prime number.\n");
  }
  printf("First 10 prime numbers are : \n ");
  while (count <= 10)
  {
    if (isPrime(n))
    {
      printf("%d ", n);
      count++;
    }
    n++;
  }
  return 0;
}