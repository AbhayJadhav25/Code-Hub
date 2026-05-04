/*Write a c program that will replace a substring of a given string by another string of length
less than ( or might be equal to) the length of existing substring. Use pointers for this
operation.*/

#include <stdio.h>
#include <string.h>
int main()
{
  char str[50], oldsub[30], newsub[30], result[70];
  char *pos;
  int idx = 0;
  printf("Enter any string : ");
  gets(str);

  printf("Enter Old Substring : ");
  gets(oldsub);

  printf("Enter New Substring : ");
  gets(newsub);

  pos = strstr(str, oldsub);
  if (pos == NULL)
  {
    printf("Substring not found");
    return 0;
  }

  int len = pos - str;
  strncpy(result, str, len);
  result[len] = '\0';
  strcat(result, newsub);
  strcat(result, pos + strlen(oldsub));

  printf("Modified String : %s\n", result);
  return 0;
}