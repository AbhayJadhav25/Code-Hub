// write a function isEven which accepts an integer as parameter return  1 if number is even otherwise 0.
#include <stdio.h>
int isEven(int num)
{
  if (num % 2 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  int num;
  printf("Enter any number : ");
  scanf("%d", &num);

  int ans = isEven(num);
  printf("%d", ans);
  return 0;
}