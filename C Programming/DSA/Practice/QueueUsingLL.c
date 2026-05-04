#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};

struct node *front = NULL, *rear = NULL;
struct node *createNode()
{
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  if (newnode == NULL)
  {
    printf("Can't Enqueue.\nHeap memory Exhausted\n");
    return NULL;
  }
  printf("Enter Value = ");
  scanf("%d", &newnode->data);

  newnode->next = NULL;
  return newnode;
}

void Enqueue()
{
  struct node *newnode;
  newnode = createNode();
  if (newnode == NULL)
  {
    printf("Can't Enqueue.\n Heap memory Exhausted.\n");
    return;
  }
  if (front == NULL)
  {
    front = rear = newnode;
  }
  else
  {
    rear->next = newnode;
    rear = newnode;
  }
}
void Dequeue()
{
  if (front == NULL)
  {
    printf("Queue is Empty.\n");
    return;
  }
  else
  {
    struct node *temp;
    temp = front;

    front = front->next;

    free(temp);
  }
}
void display(struct node *front)
{
  struct node *temp;
  temp = front;

  while (temp != NULL)
  {
    printf("%d  ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}
int main()
{
  int n, choice;

  printf("Enter initial number of nodes = ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    Enqueue();
  }
  printf("\n====Queue Menu====\n1 : Enqueue\n2 : Dequeue\n3 : Display\n4 : Exit\n");
  while (1)
  {
    printf("Enter your choice = ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      Enqueue();
      break;

    case 2:
      Dequeue(front);
      break;

    case 3:
      display(front);
      break;

    case 4:
      printf("Exit from the program\n");
      exit(0);
      break;

    default:
      printf("Invalid Choice.\n");
    }
  }
  return 0;
}