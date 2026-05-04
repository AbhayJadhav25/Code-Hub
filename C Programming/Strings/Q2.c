/*Write a program that accepts a sentence and splits the sentence into words. Sort each word
and reconstruct the sentence.
input – this is a string
Output – hist is a ginrst */

#include <stdio.h>
#include <string.h>
void sortWord(char *word)
{
  int len = strlen(word);
  for (int i = 0; i < len - 1; i++)
  {
    for (int j = i + 1; j < len; j++)
    {
      if (word[i] > word[j])
      {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
      }
    }
  }
}
int main()
{
  char str[100], newstr[] = " ", res[] = " ";
  printf("Enter any String : ");
  // fgets(str, sizeof(str), stdin);
  gets(str);

  char *token = strtok(str, " ");
  printf("Output : ");
  while (token != NULL)
  {
    sortWord(token);
    printf("%s ", token);
    token = strtok(NULL, " ");
  }
  return 0;
}