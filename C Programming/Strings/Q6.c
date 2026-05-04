#include <stdio.h>
#include <string.h>

void copy(char *dest, char *src)
{
  while ((*dest++ = *src++))
    ;
}

void concatStr(char *s1, char *s2)
{
  while (*s1)
    s1++;
  while ((*s1++ = *s2++))
    ;
}

int countChar(char *s, char ch)
{
  int c = 0;
  while (*s)
  {
    if (*s++ == ch)
      c++;
  }
  return c;
}

void replaceChar(char *s, char old, char newc)
{
  while (*s)
  {
    if (*s == old)
      *s = newc;
    s++;
  }
}

int main()
{
  char str1[100], str2[100], ch, newc;
  int choice;

  printf("Enter First String: ");
  gets(str1); // or use fgets(str1, sizeof(str1), stdin);

  do
  {
    printf("\n--- MENU ---\n");
    printf("1 : Copy String\n");
    printf("2 : Concatenate String\n");
    printf("3 : Count Character\n");
    printf("4 : Replace Character\n");
    printf("5 : Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); // clear newline from buffer

    switch (choice)
    {
    case 1:
      copy(str2, str1);
      printf("Copied String: %s\n", str2);
      break;

    case 2:
      printf("Enter Second String: ");
      gets(str2);
      concatStr(str1, str2);
      printf("Concatenated String: %s\n", str1);
      break;

    case 3:
      printf("Enter any Character: ");
      scanf("%c", &ch);
      getchar();
      int count = countChar(str1, ch);
      printf("Character '%c' occurs %d times\n", ch, count);
      break;

    case 4:
      printf("Enter Character to replace: ");
      scanf("%c", &ch);
      getchar();
      printf("Enter New Character: ");
      scanf("%c", &newc);
      replaceChar(str1, ch, newc);
      printf("Modified String: %s\n", str1);
      break;

    case 5:
      printf("Exiting...\n");
      break;

    default:
      printf("Invalid choice... Try again.\n");
    }

  } while (choice != 5);

  return 0;
}
