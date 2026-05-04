#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
static int total_nodes = 0;
struct node *createNode(struct node *head)
{
  int val;
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter Value = ");
  scanf("%d", &val);
  newnode->data = val;
  newnode->next = head;
  return newnode;
}
struct node *insertAtBegining(struct node *head)
{
  struct node *newnode, *temp;
  newnode = createNode(head);

  if (head == NULL)
  {
    newnode->next = newnode;
    head = newnode;
    total_nodes++;
    return head;
  }

  temp = head;

  while (temp->next != head)
  {
    temp = temp->next;
  }
  temp->next = newnode;
  newnode->next = head;
  head = newnode;
  total_nodes++;
  return head;
}
struct node *insertAtEnd(struct node *head)
{
  struct node *newnode, *temp;
  newnode = createNode(head);

  if (head == NULL)
  {
    newnode->next = newnode;
    head = newnode;
    total_nodes++;
    return head;
  }
  temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  newnode->next = head;
  temp->next = newnode;
  total_nodes++;
  return head;
}

struct node *deleteFromBeginning(struct node *head)
{
  struct node *temp, *temp1;
  temp = temp1 = head;
  head = temp->next;
  while (temp->next != temp1)
  {
    temp = temp->next;
  }
  temp->next = head;
  free(temp1);
  total_nodes--;
  return head;
}

struct node *deleteFromEnd(struct node *head)
{
  struct node *temp, *prev;

  temp = head;

  while (temp->next != head)
  {
    prev = temp;
    temp = temp->next;
  }
  prev->next = head;
  free(temp);
  total_nodes--;
  return head;
}

struct node *searchValue(struct node *head, int value)
{
  struct node *temp;
  int isFound = 0;
  int i = 0;
  temp = head;
  if (temp->data == value)
  {
    printf("Value found at 1st position.\n");
    return head;
  }

  do
  {
    if (temp->data == value)
    {
      printf("Value found at %d rd postion.\n", (i + 1));
      isFound = 1;
      return head;
    }
    i++;
    temp = temp->next;
  } while (temp != head);

  if (isFound == 0)
  {
    printf("Value not found\n");
    return head;
  }
}
void display(struct node *head)
{
  struct node *temp;
  temp = head;

  do
  {
    printf("%d -> ", temp->data);
    temp = temp->next;
  } while (temp != head);
  printf("\n");
}
int main()
{
  struct node *head = NULL, *temp;
  int n, i, value, choice, ans;
  printf("Enter number of initial nodes : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    struct node *newnode;
    newnode = createNode(head);

    if (head == NULL)
    {
      head = newnode;
      temp = head;
    }
    else
    {
      temp->next = newnode;
      temp = newnode;
    }
    total_nodes++;
  }

  printf("====Circular Linked list Menu====\n1 : Display \n2 : Insert at Begining.\n3 : Insert at end.\n4 : Delete from Beginning\n5 : Delete from end\n6 : Search Element\n7 : Count nodes\n8 : Exit\n");
  while (1)
  {
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      display(head);
      break;
    case 2:
      head = insertAtBegining(head);
      break;
    case 3:
      head = insertAtEnd(head);
      break;
    case 4:
      head = deleteFromBeginning(head);
      break;
    case 5:
      head = deleteFromEnd(head);
      break;
    case 6:
      printf("Enter Value to search : ");
      scanf("%d", &value);
      head = searchValue(head, value);
      break;
    case 7:
      printf("Total nodes = %d\n", total_nodes);
      break;
    case 8:
      exit(0);
      break;

    default:
      printf("Invalid Choice\n");
      break;
    }
  }
  return 0;
}

/*
Create
b. Display
c. Insert at Beginning
d. Insert at End
e. Delete from Beginning
f.
Delete from End
g. Search Element
h. Count Nodes
*/