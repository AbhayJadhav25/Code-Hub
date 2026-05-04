#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *createNode()
{
  int value;
  struct node *h1;
  h1 = (struct node *)malloc(sizeof(struct node));
  printf("Enter Value : ");
  scanf("%d", &value);
  h1->data = value;
  h1->next = 0;
  return h1;
}

struct node *insertAtFirst(struct node *head, int value)
{
  struct node *k1;
  k1 = (struct node *)malloc(sizeof(struct node));
  k1->data = value;
  k1->next = head;
  return k1;
}

struct node *insertAtIndex(struct node *head, int index, int value)
{
  struct node *newnode;
  struct node *temp;
  temp = head;
  int i = 0;
  newnode = (struct node *)malloc(sizeof(struct node));

  while (i != index - 1)
  {
    temp = temp->next;
    i++;
  }
  newnode->data = value;
  newnode->next = temp->next;
  temp->next = newnode;
  return head;
}

struct node *insertAtEnd(struct node *head, int value)
{
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  struct node *temp;
  temp = head;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newnode;
  newnode->next = NULL;
  newnode->data = value;
  return head;
}
void display(struct node *ptr)
{
  while (ptr != NULL)
  {
    printf("%d -> ", ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}

int main()
{
  int n, i, value, index;
  struct node *head = NULL, *temp;

  printf("How many nodes You want : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    struct node *newNode;
    newNode = createNode();

    if (head == NULL)
    {
      head = newNode;
      temp = head;
    }
    else
    {
      temp->next = newNode;
      temp = newNode;
    }
  }
  int ch;
  printf("\n1 : Insertion from start.\n2 : Insertion from end.\n3 :  Insertion from middle. \n4 : Deletion from start\n5 : Deletion from end\6 : Deletion from middle\n7 : Display\n8: Exit");
  while (1)
  {
    printf("\nEnter Your Choice : ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    {
      printf("Insert At the begging : ");
      scanf("%d", &value);
      head = insertAtFirst(head, value);
    }
    break;
    case 2:
    {
      printf("Insert At the End : ");
      scanf("%d", &value);
      head = insertAtEnd(head, value);
    }
    break;
    case 3:
    {
      printf("Enter Index : ");
      scanf("%d", &index);
      printf("Enter value to insert : ");
      scanf("%d", &value);
      head = insertAtIndex(head, 3, value);
    }
    break;
    // case 4:
    // {
    //   deleteStart();
    // }
    // break;
    // case 5:
    // {
    //   deleteEnd();
    // }
    // break;
    // case 6:
    // {
    //   deleteMiddle();
    // }
    // break;
    case 7:
    {
      printf("\nContents of Linked List : ");
      display(head);
    }
    break;
    case 8:
    {
      exit(0);
    }
    break;
    default:
      printf("\nEnter Valid Choice.\n");
    }
  }
  return 0;
}