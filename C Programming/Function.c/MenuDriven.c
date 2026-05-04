// Menu driven program to perform the following operations on a character type variable
#include <stdio.h>
int main()
{
  char ch;
  int choice;
  printf("Enter any Character : ");
  scanf("%c", &ch);

  printf("1)Check if it is an alphabet\n2)Check if it is an digit\n3)Check if it is lowercase\n4)Check if it is an Uppercase\n5)Convert it to uppercase\n6)Convert it to lowercase\n");

  printf("Enter your choice : ");
  scanf("%d", &choice);

  switch (choice)
  {
  case 1:
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
      printf("%c is alphabet", ch);
    else
      printf("%c is not alphabet", ch);
    break;

  case 2:
    if (ch >= 48 && ch <= 57)
      printf("%c is digit", ch);
    else
      printf("%c is not a digit", ch);
    break;

  case 3:
    if (ch >= 97 && ch <= 122)
      printf("%c is lowercase", ch);
    else
      printf("%c is not lowercase", ch);
    break;

  case 4:
    if (ch >= 65 && ch <= 90)
      printf("%c is uppercase", ch);
    else
      printf("%c is not uppercase", ch);
    break;

  case 5:
    printf("Before Converting to uppercase :%c", ch);
    if (ch >= 97 && ch <= 122)
    {
      ch -= 32;
    }
    printf("After Converting to uppercase :%c", ch);
    break;
  case 6:
    printf("Before Converting to uppercase :%c", ch);
    if (ch >= 65 && ch <= 90)
    {
      ch += 32;
    }
    printf("After Converting to uppercase :%c", ch);
    break;

  default:
    printf("Invalid choice");
  }
  return 0;
}