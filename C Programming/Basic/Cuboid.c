// Print suface area and volume of cuboid
#include <stdio.h>
int main()
{
  int l, b, h;
  printf("Enter Length , breadth and height of cuboid : ");
  scanf("%d %d %d", &l, &b, &h);

  printf("Surface area of cuboid : %d\n", 2 * (l * b + l * h + b * h));
  printf("Volume of Cuboid : %d\n", (l * b * h));
  return 0;
}