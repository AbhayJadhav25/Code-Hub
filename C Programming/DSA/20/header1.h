struct stack{
    int size;
    int top;
    int *data;
};
int isFull(struct stack *s);
int isEmpty(struct stack *s);
int push(struct stack *s , int val);
int pop(struct stack *s);
int peek(struct stack *s);
void display(struct stack *s);