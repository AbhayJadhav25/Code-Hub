// Sum of first n terms of the taylor series
#include <stdio.h>
double powerOf(int x, int n)
{
  double power = x, fact = 1.0, sum = 0, term = 0;
  int sign = 1;
  for (int i = 1; i <= n; i++)
  {
    term = sign * (power / fact);
    sum += term;

    if (i == 1)
    {
      printf(" %.2lf", term);
    }
    else if (term >= 0)
    {
      printf(" + %.2lf", term);
    }
    else
    {
      printf(" - %.2lf", term);
    }

    power *= x * x;
    fact *= (i + 1) * (i + 2);
    sign *= -1;
  }
  printf("\n");
  return sum;
}
int main()
{
  double x, n;
  printf("Enter Value of x : ");
  scanf("%lf", &x);

  printf("How many terms you want : ");
  scanf("%lf", &n);

  double ans = powerOf(x, n);
  printf("%.2f", ans);
  return 0;
}