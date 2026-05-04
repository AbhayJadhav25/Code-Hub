#include <stdio.h>
#include "Header.h"
#include <stdlib.h>
int checkParenthesis(struct expression *e, char *exp)
{
  int i;

  for (i = 0; exp[i] != '\0'; i++)
  {
    char ch = exp[i];
    if (ch == '(' || ch == '{' || ch == '[' || ch == '<')
    {
      pushExp(e, ch);
    }
    else if (ch == ')' || ch == '}' || ch == ']' || ch == '>')
    {
      if (isEmptyExp(e))
      {
        return 0;
      }
      char topped = popExp(e);
      if ((topped == '(' && ch != ')') || (topped == '[' && ch != ']') || (topped == '{' && ch != '}') || (topped == '<' && ch != '>'))
      {
        return 0;
      }
    }
  }
  return isEmptyExp(e);
}
int main()
{
  char exp[100];
  int ans;
  struct expression *e;
  e = (struct expression *)malloc(sizeof(struct expression));
  e->top = -1;
  e->size = 100;
  e->arr = (char *)malloc(e->size * sizeof(char));

  printf("Enter Expression : ");
  fgets(exp, sizeof(exp), stdin);

  ans = checkParenthesis(e, exp);
  if (ans)
  {
    printf("%s is Balanced Expression.\n", exp);
  }
  else
  {
    printf("%s is not Balanced Expression.\n", exp);
  }
  return 0;
}