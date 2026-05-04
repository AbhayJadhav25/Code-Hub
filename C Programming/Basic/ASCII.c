// Display ASCII value of Character
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter any Character : ");
  scanf("%c", &ch);

  printf("ASCII of %c : %d ", ch, ch);
  return 0;
}