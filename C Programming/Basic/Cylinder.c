#include <stdio.h>
#include <math.h>
int main()
{
  double radius, height;
  printf("Enter Dimension of Cylinder : ");
  scanf("%lf %lf", &radius, &height);

  double surfaceArea = 2 * 3.14 * radius * radius;
  double volume = 3.14 * radius * radius * height;

  printf("Surface Area = %.2lf \n Volume = %.2lf\n", surfaceArea, volume);

  return 0;
}
