#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *prev;
  struct node *next;
};
struct node *createNode()
{
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));

  printf("Enter Value = ");
  scanf("%d", &newnode->data);

  newnode->next = NULL;
  newnode->prev = NULL;

  return newnode;
}
struct node *insertAtBegin(struct node *head)
{
  struct node *newnode, *temp;
  newnode = createNode();

  newnode->next = head;
  head = newnode;

  return head;
}

struct node *insertAtEnd(struct node *head)
{
  struct node *temp, *newnode;
  newnode = createNode();

  if (head == NULL)
  {
    head = newnode;
    temp = head;
    return head;
  }

  temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newnode;
  newnode->prev = temp;
  return head;
}

struct node *DeleteFromBegin(struct node *head)
{
  struct node *temp;
  if (head == NULL)
  {
    printf("List is Empty.\n");
    return NULL;
  }

  temp = head;
  head = temp->next;
  return head;
}

struct node *DeleteFromEnd(struct node *head)
{
  struct node *temp, *prev;
  if (head == NULL)
  {
    printf("List is Empty.\n");
    return NULL;
  }

  temp = head;
  while (temp->next != NULL)
  {
    prev = temp;
    temp = temp->next;
  }
  prev->next = NULL;
  free(temp);

  return head;
}

struct node *searchElement(struct node *head, int value)
{
  struct node *temp;
  int i = 0, isFound = 0;
  if (head == NULL)
  {
    printf("List is Empty.\n");
    return NULL;
  }

  temp = head;

  while (temp->next != NULL)
  {
    if (temp->data == value)
    {
      isFound = 1;
      printf("%d value is present as %d position.\n", value, (i + 1));
      return head;
    }
    i++;
    temp = temp->next;
  }
  if (isFound == 0)
  {
    printf("Value not Found.\n");
    return head;
  }
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
  struct node *head = NULL, *temp;
  int n, i, value, choice;

  printf("Enter initial number of nodes = ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    struct node *newnode;
    newnode = createNode();

    if (head == NULL)
    {
      head = newnode;
      newnode->prev = NULL;
      newnode->next = NULL;
      temp = head;
    }
    else
    {
      temp->next = newnode;
      newnode->prev = temp;
      temp = newnode;
    }
  }

  printf("\n=====Doubly Linked List====\n1 : Display\n2 : Insert at Beginning\n3 : Insert at End\n4 : Delete from Beginning\n5 : Delete from End\n6 : Search Element\n7 : Exit\n");

  while (1)
  {
    printf("Enter Your Choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      display(head);
      break;

    case 2:
      head = insertAtBegin(head);
      break;

    case 3:
      head = insertAtEnd(head);
      break;

    case 4:
      head = DeleteFromBegin(head);
      break;

    case 5:
      head = DeleteFromEnd(head);
      break;

    case 6:
      printf("Enter Value to search = ");
      scanf("%d", &value);
      head = searchElement(head, value);
      break;

    case 7:
      printf("Exit from the program.\n");
      exit(0);
      break;

    default:
      printf("Invalid Choice.\n");
      break;
    }
  }
  return 0;
}

/*
a. Create
b. Display
c. Insert at Beginning
d. Insert at End
e. Delete from Beginning
f.
Delete from End
g. Search Element
h. Exit
*/