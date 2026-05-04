// Accept any character and display its previous and next character
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter any Character : ");
  scanf("%c", &ch);
  printf("Previous Character : %c\n", ch - 1);
  printf("Next Character : %c ", ch + 1);
  return 0;
}