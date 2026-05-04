struct stack
{
  int size;
  int top;
  int *arr;
};
struct expression
{
  int size;
  int top;
  char *arr;
};

int isEmpty(struct stack *s);
int isFull(struct stack *s);
int push(struct stack *s, int value);
int pop(struct stack *s);
int peek(struct stack *s);
void display(struct stack *s);

int isEmptyExp(struct expression *e);
int isFullExp(struct expression *e);
int pushExp(struct expression *e, char value);
char popExp(struct expression *e);
