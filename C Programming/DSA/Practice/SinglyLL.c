#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *createNode()
{
  int val;
  struct node *k1;
  k1 = (struct node *)malloc(sizeof(struct node));
  printf("Enter Value to Enter = ");
  scanf("%d", &val);

  k1->data = val;
  k1->next = 0;

  return k1;
}
struct node *InseertAtFirst(struct node *head, int val)
{
  // struct node *newnode;
  // newnode = createNode();

  // newnode->next = head;
  // head = newnode;

  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  newnode->data = val;
  newnode->next = head;
  head = newnode;
  return head;
}

struct node *InsertAtMiddle(struct node *head)
{
  int idx, i = 0;
  printf("\nInsert Index number where you have to Insert : \n");
  scanf("%d", &idx);
  struct node *newnode;
  newnode = createNode();
  struct node *temp;
  temp = head;

  while (i != idx - 1)
  {
    temp = temp->next;
    i++;
  }
  newnode->next = temp->next;
  temp->next = newnode;
  return head;
}
struct node *InsertAtEnd(struct node *head)
{
  struct node *newnode;
  newnode = createNode();
  struct node *temp;
  temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newnode;
  newnode->next = NULL;
  return head;
}

struct node *DeleteFromFirst(struct node *head)
{
  struct node *temp;
  temp = head;

  head = temp->next;

  free(temp);

  return head;
}
struct node *DeleteFromMiddle(struct node *head)
{
  int idx, i = 0;
  struct node *temp, *prev;
  temp = head;
  printf("\nEnter index to delete value = \n");
  scanf("%d", &idx);

  if (idx == 0)
  {
    head = head->next;
    free(temp);
  }

  while (i < idx - 1)
  {
    temp = temp->next;
    i++;
  }
  prev = temp->next;
  temp->next = prev->next;
  free(prev);
  return head;
}

struct node *DeleteFromEnd(struct node *head)
{
  struct node *temp, *prev = NULL;
  temp = head;

  if (head == NULL)
    return NULL;

  while (temp->next != NULL)
  {
    prev = temp;
    temp = temp->next;
  }

  if (prev == NULL)
  {
    free(head);
    return NULL;
  }
  prev->next = NULL;
  free(temp);
  return head;
}
struct node *deleteByValue(struct node *head, int value)
{
  struct node *temp, *prev;
  temp = head;

  if (temp->data == value)
  {
    temp->next = head;
    free(temp);
    return head;
  }
  while (temp->next != NULL)
  {
    prev = temp;
    temp = temp->next;

    if (temp->data == value)
    {
      prev->next = temp->next;
      free(temp);
      return head;
    }
  }
  if (temp->next == NULL)
  {
    printf("Value not found");
  }
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
#include <stdlib.h>
int main()
{
  struct node *head = NULL, *temp;
  int n, choice, value;

  printf("Enter number of initial nodes : ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
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
      temp->next = newnode;
      temp = newnode;
    }
  }
  printf("\n===Linked List Menu===\n");
  printf("1 : Insert At beggining \n 2 : Insert at Middle \n 3 : Insert at the end\n");
  printf("4 : Delete from beggining \n 5 : Delete from Middle \n 6 : Delete from the end\n 7 : Delete by value \n 8 : Display \n9 : Exit");
  while (1)
  {
    printf("Enter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("\nEnter Value to insert = ");
      scanf("%d", &value);
      head = InseertAtFirst(head, value);
      // head = InseertAtFirst(head);
      break;

    case 2:
      head = InsertAtMiddle(head);
      break;

    case 3:
      head = InsertAtEnd(head);
      break;

    case 4:
      head = DeleteFromFirst(head);
      break;

    case 5:
      head = DeleteFromMiddle(head);
      break;

    case 6:
      head = DeleteFromEnd(head);
      break;

    case 7:
      printf("Enter Value to Delete : ");
      scanf("%d", &value);
      head = deleteByValue(head, value);
      break;

    case 8:
      display(head);
      break;

    case 9:
      exit(0);
      break;
    default:
      printf("\nInavlid choice\n");
      break;
    }
  }
  return 0;
}