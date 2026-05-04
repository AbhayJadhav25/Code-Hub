// Roots of quadratic equation with all possible cases.
#include <stdio.h>
#include <math.h>
int main()
{
  int a, b, c;
  printf("Enter Value of a , b , c : ");
  scanf("%d%d%d", &a, &b, &c);
  int root1, root2;
  if (a == 0)
  {
    printf("a can't be Zero . invalid equation");
    return 0;
  }

  root1 = (-b + sqrt((b * b) - 4 * a * c)) / 2 * a;
  root2 = (-b - sqrt((b * b) - 4 * a * c)) / 2 * a;

  printf("Roots of Quadratic equation Are : %d and %d", root1, root2);

  return 0;
}