// Print Digit in words
#include <stdio.h>
int main()
{
  int digit, rev = 0;
  printf("Enter any digit : ");
  scanf("%d", &digit);

  while (digit > 0)
  {
    int rem = digit % 10;
    rev = (rev * 10) + rem;
    digit /= 10;
  }
  // printf("Reverse = %d ", rev);
  while (rev > 0)
  {
    int rem = rev % 10;
    switch (rem)
    {
    case 0:
      printf("Zero - ");
      break;

    case 1:
      printf("One - ");
      break;

    case 2:
      printf("Two - ");
      break;

    case 3:
      printf("Three - ");
      break;

    case 4:
      printf("Four - ");
      break;

    case 5:
      printf("Five - ");
      break;

    case 6:
      printf("Six - ");
      break;

    case 7:
      printf("Seven - ");
      break;

    case 8:
      printf("EIght - ");
      break;

    case 9:
      printf("Nine - ");
      break;
    }
    rev /= 10;
  }
  return 0;
}