// Distance between two poinnts
#include <stdio.h>
#include <math.h>
int main()
{
  int x1, x2, y1, y2;
  printf("Enter value of x coordinates : ");
  scanf("%d%d", &x1, &x2);
  printf("Enter value of Y coordinates : ");
  scanf("%d%d", &y1, &y2);

  double distance = (double)sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  printf("Distance between two Points : %.2lf", distance);

  return 0;
}