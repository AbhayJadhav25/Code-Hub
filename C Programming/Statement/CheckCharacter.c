/**Ceck Character is alphabet , digit or special symbol. if it is an alphabet , check it is lowercase or uppercase and change the case.
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter Any Character : ");
  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z')
  {
    printf("%c is Alphabet . and it's Uppercase\n", ch);
    ch += 32;
    printf("It's equivalent lowercase = %c\n", ch);
  }
  else if (ch >= 'a' && ch <= 'z')
  {
    printf("%c is an Alphabet. and it's Lowercase\n", ch);
    ch -= 32;
    printf("It's equivalent Uppercase = %c", ch);
  }
  else if (ch >= '0' && ch <= '9')
  {
    printf("%c is digit ", ch);
  }
  else
  {
    printf("%c is special Character", ch);
  }
  return 0;
}*/

// Check Character is alphabet , digit or special symbol. if it is an alphabet .check it is lowercase or uppercase using ASCII.
#include <stdio.h>
int main()
{
  char ch;
  printf("Enter Any Character : ");
  scanf("%c", &ch);

  if (ch >= 65 && ch <= 90)
  {
    printf("%c is Alphabet . and it's Uppercase\n", ch);
    printf("It's Equivalent lowercase : %c\n", ch + 32);
  }
  else if (ch >= 97 && ch <= 122)
  {
    printf("%c is an Alphabet. and it's Lowercase\n", ch);
    printf("It's Equivalent Uppercase : %c\n", ch - 32);
  }
  else if (ch >= 48 && ch <= 57)
  {
    printf("%c is digit ", ch);
  }
  else
  {
    printf("%c is special Character", ch);
  }
  return 0;
}