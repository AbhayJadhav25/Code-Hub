// Menu driven Program which perform operation Area of square , rectangle , triangle;

#include <stdio.h>
int main()
{
  int ch, a, b, c;

  printf("1 : Area of square \n2: Area of Rectangle \n3 : Area of triangle\n");
  printf("Enter your choice : ");
  scanf("%d", &ch);

  switch (ch)
  {
  case 1:

    printf("Enter side of square : ");
    scanf("%d", &a);
    printf("Area of square = %d\n", a * a); // conside a as a Side
    break;

  case 2:
    printf("Enter length  and width of rectangle : ");
    scanf("%d%d", &a, &b); // conside a as a lenght , and b as a width.
    printf("Area of Rectangle = %d\n", a * b);
    break;

  case 3:
    printf("Enter Height and base of triangle ");
    scanf("%d%d", &a, &b); // conside a as a height and b as a base.
    printf("Area of triangle = %.2lf\n", (double)0.5 * a * b);
    break;

  default:
    printf("Invalid choice ! Try again...\n");
    break;
  }
  return 0;
}