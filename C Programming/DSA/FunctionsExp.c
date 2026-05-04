#include <stdio.h>
#include "Header.h"

int isEmptyExp(struct expression *e)
{
  if (e->top == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int isFullExp(struct expression *e)
{
  if (e->top == e->size - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int pushExp(struct expression *e, char value)
{
  if (isFullExp(e))
  {
    return 0;
  }
  else
  {
    e->top++;
    e->arr[e->top] = value;
    return 1;
  }
}

char popExp(struct expression *e)
{
  int val;
  if (isEmptyExp(e))
  {
    return '\0';
  }
  else
  {
    val = e->arr[e->top];
    e->top--;
    return val;
  }
}
