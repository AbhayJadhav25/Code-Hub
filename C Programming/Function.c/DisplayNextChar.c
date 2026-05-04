// Write a function which accepts a character and int n , display the next n character
#include <stdio.h>
void printChar(char ch, int n)
{
  for (int i = 1; i <= n; i++)
  {
    ch++;
    printf("%c ", ch);
  }
}
int main()
{
  char ch;
  int n;
  printf("Enter any character : ");
  scanf("%c", &ch);
  printf("Enter value of n : ");
  scanf("%d", &n);
  printChar(ch, n);
  return 0;
}