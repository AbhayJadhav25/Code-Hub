#include <stdio.h>
#include "Header.h"

int isEmpty(struct stack *s)
{
  if (s->top == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int isFull(struct stack *s)
{
  if (s->top == s->size - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int push(struct stack *s, int value)
{
  if (isFull(s))
  {
    return 0;
  }
  else
  {
    s->top++;
    s->arr[s->top] = value;
    return 1;
  }
}

int pop(struct stack *s)
{
  int val;
  if (isEmpty(s))
  {
    return 0;
  }
  else
  {
    val = s->arr[s->top];
    s->top--;
    return val;
  }
}
int peek(struct stack *s)
{
  if (isEmpty(s))
  {
    return 0;
  }
  else
  {
    return s->arr[s->top];
  }
}
void display(struct stack *s)
{
  if (isEmpty(s))
  {
    printf("Stack is underflow\n");
  }
  else
  {
    for (int i = 0; i <= s->top; i++)
    {
      printf("%d\t", s->arr[i]);
    }
    printf("\n");
  }
}