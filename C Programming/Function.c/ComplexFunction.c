// write a function that accepts a character as a parameter and return  1 if it is an alphabet . 2 if it is a digit and 3 if it is special symbol.Inn main , acccept a characters till the user enters EOF and use the function to count the total number of alphabet , digits , and special symbol.

#include <stdio.h>
int alpha = 0, digit = 0, symbol = 0;
int checker(char ch);
void totalCount(int res);
int main()
{
  char ch;
  int res;

  printf("Enter characters : ");
  while ((ch = getchar()) != EOF)
  {
    res = checker(ch);
    totalCount(res);
  }
  printf("Total Alphabet : %d\nTotal Digit : %d\nTotal Symbol : %d\n", alpha, digit, symbol);
  return 0;
}
int checker(char ch)
{
  if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    return 1;
  else if (ch >= 48 && ch <= 57)
    return 2;
  else
    return 3;
}
void totalCount(int res)
{
  if (res == 1)
    alpha++;
  else if (res == 2)
    digit++;
  else
    symbol++;
}