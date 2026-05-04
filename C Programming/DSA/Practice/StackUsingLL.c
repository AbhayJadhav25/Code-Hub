#include <stdio.h>
#include <stdlib.h>
struct node
{
  int size;
  int data;
  struct node *next;
};
struct node *createNode()
{
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));

  printf("Enter Value = ");
  scanf("%d", &newnode->data);
  newnode->next = NULL;

  return newnode;
}
int isEmpty(struct node *head)
{
  if (head == NULL)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

struct node *push(struct node *head)
{
  struct node *newnode;
  newnode = createNode();

  if (newnode == NULL)
  {
    printf("Stack is Overflow.\n Heap memory is Exhausted\n");
    return NULL;
  }

  newnode->next = head;
  head = newnode;

  return head;
}

struct node *pop(struct node *head)
{
  if (isEmpty(head))
  {
    printf("Stack is Underflow.\n");
    return NULL;
  }
  else
  {
    struct node *temp;
    temp = head;
    head = temp->next;
    free(temp);
    return head;
  }
}

void peek(struct node *head)
{
  if (isEmpty(head))
  {
    printf("Stack is underflow.\n");
  }
  printf("Topped Element = %d\n", head->data);
}
void display(struct node *head)
{
  struct node *temp;
  temp = head;

  while (temp != NULL)
  {
    printf("%d  ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}
int main()
{
  int n, i, value, choice;
  struct node *head = NULL, *temp;

  printf("Enter initial nodes of stack : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    struct node *newnode;
    newnode = createNode();

    if (head == NULL)
    {
      head = newnode;
      temp = head;
    }
    else
    {
      newnode->next = head;
      head = newnode;
    }
  }

  printf("\n====Stack Menu====\n1 : Push\n2 : Pop\n3 : peek\n4 : display\n5 : Exit\n");

  while (1)
  {
    printf("Enter Your choic = ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      head = push(head);
      break;

    case 2:
      head = pop(head);
      break;

    case 3:
      peek(head);
      break;

    case 4:
      display(head);
      break;

    case 5:
      printf("Exit the program.\n");
      exit(0);
      break;

    default:
      printf("Enter Valid choice.\n");
      break;
    }
  }
  return 0;
}