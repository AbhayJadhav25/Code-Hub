// Swap two numbers
#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter any two numbers : ");
  scanf("%d%d", &a, &b);

  printf("Number before swap \n a = %d \t b = %d ", a, b);
  // a = a ^ b;
  // b = a ^ b;
  // a = a ^ b;/
  int c = a;
  a = b;
  b = c;

  printf("\nNumber After swap \n a = %d \t b = %d ", a, b);
}
