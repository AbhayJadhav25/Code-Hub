#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
int main()
{
  int n, i, choice, ans, value;
  struct stack *s;
  s = (struct stack *)malloc(sizeof(struct stack));
  s->top = -1;
  s->size = 10;
  s->arr = (int *)malloc(s->size * sizeof(int));
  printf("Enter initial size of stack (<=10) : ");
  scanf("%d", &n);

  printf("enter %d Values in stack \n", n);
  for (i = 0; i < n; i++)
  {
    printf("Enter Number = ");
    scanf("%d", &(s->arr[i]));
    s->top++;
  }

  printf("------Stack Menu------\n");
  printf("1 : Push \n2 : Pop\n3 : Peek\n4 : Display\n5 : Exit\n");

  do
  {
    printf("Enter Choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter Value to push : ");
      scanf("%d", &value);
      ans = push(s, value);

      if (ans)
      {
        printf("Value pushed successfully\n");
      }
      else
      {
        printf("Stack is overflow\n");
      }
      break;

    case 2:
      if (pop(s))
      {
        printf("Valued Popped Successfully\n");
      }
      else
      {
        printf("Stack is underflow\n");
      }
      break;

    case 3:
      ans = peek(s);
      if (ans)
      {
        printf("Topped Value : %d\n", ans);
      }
      else
      {
        printf("Stack is underflow\n");
      }
      break;

    case 4:
      display(s);
      break;
    }
  } while (choice != 5);
  return 0;
}