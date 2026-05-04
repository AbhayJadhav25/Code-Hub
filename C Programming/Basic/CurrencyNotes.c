// Print total number of currency notes of each denomination 1 , 5 , 10

#include <stdio.h>
int main()
{
  int amt;
  printf("Enter any amount : ");
  scanf("%d", &amt);

  if (amt >= 10)
  {
    printf("10 Currency : %d\n", (int)(amt / 10));
    amt = amt % 10;
  }
  if (amt >= 5)
  {
    printf("5 Currency : %d\n", (int)(amt / 5));
    amt = amt % 5;
  }

  printf("1 Currency : %d\n", amt);
  return 0;
}