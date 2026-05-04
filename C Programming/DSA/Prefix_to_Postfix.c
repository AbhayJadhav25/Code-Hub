#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
  int size;
  int top;
  char **str;
};
int isEmpty(struct stack *s)
{
  return (s->top == -1);
}

int isFull(struct stack *s)
{
  return (s->top == s->size - 1);
}
void push(struct stack *s, char *val)
{
  if (!isFull(s))
  {
    s->str[++s->top] = val;
  }
}
char *pop(struct stack *s)
{
  if (!isEmpty(s))
  {
    return s->str[s->top--];
  }
  return NULL;
}
int isOperator(char ch)
{
  return (ch == '+' || ch == '-' || ch == '*' ||
          ch == '/' || ch == '^' || ch == '%');
}
void preToPost(struct stack *s, char *exp)
{
  int n = strlen(exp);
  for (int i = n - 1; i >= 0; i--)
  {
    char ch = exp[i];
    if (isOperator(ch))
    {
      char *t1 = pop(s);
      char *t2 = pop(s);

      char *temp = (char *)malloc(strlen(t1) + strlen(t2) + 2);
      strcpy(temp, t1);
      strcat(temp, t2);

      int l = strlen(temp);
      temp[l] = ch;
      temp[l + 1] = '\0';
      push(s, temp);
    }
    else
    {
      char *opr = (char *)malloc(2);
      opr[0] = ch;
      opr[1] = '\0';
      push(s, opr);
    }
  }
  printf("Postfix Conversion : %s\n", pop(s));
}
int main()
{
  struct stack *s;
  char exp[100];
  s = malloc(sizeof(struct stack));
  s->top = -1;
  s->size = 100;
  s->str = (char **)malloc(s->size * sizeof(char *));

  printf("Enter prefix Expression : ");
  scanf("%s", exp);

  printf("Expression = %s\n", exp);
  preToPost(s, exp);

  free(s->str);
  free(s);
  return 0;
}