/*Write a program which accepts string and checks whether it is palindrome or not.
Example:               input: madam              output: Given string is palindrome

#include <stdio.h>
#include <string.h>
int main()
{
  char str[100], rev[100];
  printf("Enter any String : ");
  gets(str);

  strcpy(rev, str);
  strrev(rev);

  if (strcmpi(rev, str) == 0)
  {
    printf("Given String is Palindrome");
  }
  else
  {
    printf("Given String is not Palindrome");
  }
  return 0;
}*/

#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  int isPalindrome = 1;
  printf("Enter any String : ");
  gets(str);

  int len = strlen(str);

  for (int i = 0; i < len / 2; i++)
  {
    if (str[i] != str[len - i - 1])
    {
      isPalindrome = 0;
      break;
    }
  }
  if (isPalindrome)
  {
    printf("%s is Palindrome", str);
  }
  else
  {
    printf("%s is not palindrome", str);
  }
  return 0;
}