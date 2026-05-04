// Convert a Decimal number into binary , octal , and hexaDecimal.
#include <stdio.h>
void binry(int num)
{
  int bin[32];
  int i = 0;
  if (num == 0)
  {
    printf("0");
    return;
  }

  while (num > 0)
  {
    bin[i++] = num % 2;
    num /= 2;
  }
  printf("Binary Number : ");
  for (int j = i - 1; j >= 0; j--)
  {
    printf("%d", bin[j]);
  }
  printf("\n");
}

void octal(int num)
{
  int i = 0, oct[32];
  if (num == 0)
  {
    printf("0");
    return;
  }

  while (num > 0)
  {
    oct[i++] = num % 8;
    num /= 8;
  }
  printf("Octal Number : ");
  for (int j = i - 1; j >= 0; j--)
  {
    printf("%d", oct[j]);
  }
  printf("\n");
}

void hexadecimal(int num)
{
  char hex[32];
  int i = 0;
  if (num == 0)
  {
    printf("Hexadecimal : 0\n");
    return;
  }
  while (num > 0)
  {
    int rem = num % 16;
    hex[i++] = (rem < 10) ? rem + '0' : rem - 10 + 'A';
    num /= 16;
  }
  printf("Hexadecimal : ");
  for (int j = i - 1; j >= 0; j--)
  {
    printf("%c", hex[j]);
  }
  printf("\n");
}

int main()
{
  int num;
  printf("Enter Any Number : ");
  scanf("%d", &num);
  binry(num);
  octal(num);
  hexadecimal(num);
  return 0;
}