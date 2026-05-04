// Check number is palindrome or not
#include <stdio.h>
int main()
{
  int num, temp, rev = 0;
  printf("Enter any number : ");
  scanf("%d", &num);

  temp = num;

  while (num > 0)
  {
    int rem = num % 10;
    rev = (rev * 10) + rem;
    num /= 10;
  }

  if (temp == rev)
  {
    printf("%d is palindrome number\n",num);
  }
  else
  {
    printf("%d is not a Palindrome number",num);
  }
  return 0;
}