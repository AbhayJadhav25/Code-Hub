/*Write a program to accept the string and select one character from user which is may /may
not be in that string, If it is present in the string deletes that character from the given string.
Print the number of occurrences of that character and the remaining string. (Use array /
pointer and accept string from user).
Example:”I m fine, how r u?”
char =h;
o/p=” I m fine, ow r u?” */

#include <stdio.h>
#include <string.h>
int main()
{
  char str[100], newStr[100];
  int i, j = 0, cnt = 0;

  printf("Enter a string : ");
  fgets(str, sizeof(str), stdin);

  char ch;
  printf("Enter any Char : ");
  scanf("%c", &ch);

  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] != ch)
    {
      newStr[j++] = str[i];
    }
    else
    {
      cnt++;
    }
  }
  newStr[j] = '\0';

  printf("Character %c Occured %d time.\n", ch, cnt);
  printf("String after Deletion : %s\n", newStr);
  return 0;
}