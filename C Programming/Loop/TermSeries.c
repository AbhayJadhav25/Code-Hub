// 1! / x   +  2! / x^2 + 3! / x^3+....

/*#include <stdio.h>
int main()
{
  int n, x;
  float term, sum = 0, fact, power;
  printf("Enter how many terms you want : ");
  scanf("%d", &n);

  printf("Enter value of x : ");
  scanf("%d", &x);

  for (int i = 1; i <= n; i++)
  {
    fact = 1;
    for (int j = 1; j <= i; j++)
    {
      fact *= j;
    }

    power = 1;
    for (int j = 1; j <= i; j++)
    {
      power = power * x;
    }
    term = fact / power;
    sum += term;
  }
  printf("Sum of the series : %.2f ", sum);
  return 0;
}*/

// Optimize
#include <stdio.h>
int main()
{
  int n, x, fact = 1, power = 1;
  float sum = 0, term;

  printf("How many terms you want : ");
  scanf("%d", &n);
  printf("Enter value of x : ");
  scanf("%d", &x);

  for (int i = 1; i <= n; i++)
  {
    fact *= i;  // Update the factorial regularly
    power *= x; // update the power regularly
    term = (float)fact / power;
    sum += term;
  }
  printf("Sum of the series : %.2f\n", sum);
  return 0;
}