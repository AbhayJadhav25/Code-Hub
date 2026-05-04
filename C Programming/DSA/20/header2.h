struct stack{
    int data;
    struct stack *next;
};

struct stack *createstack();
struct stack *push(struct stack *head);
struct stack *pop(struct stack *head);
int peek(struct stack *head);
void display(struct stack *head);