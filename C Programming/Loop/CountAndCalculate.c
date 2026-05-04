// count the number of digits and calculate sum of all digits
#include <stdio.h>
int main()
{
  int digit, count = 0, sum = 0;
  printf("Enter any digit : ");
  scanf("%d", &digit);

  while (digit > 0)
  {
    int rem = digit % 10;
    sum = sum + rem;
    digit = digit / 10;
    count++;
  }
  printf("Total number of Digits : %d \n Sum of total digits : %d\n", count, sum);
  return 0;
}