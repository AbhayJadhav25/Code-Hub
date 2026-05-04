/*A B C D
E F G
H I
J*/

#include <stdio.h>
int main()
{
  int row = 4;
  char ch = 'A';
  for (int i = row; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%c ", ch);
      ch++;
    }
    printf("\n");
  }
}