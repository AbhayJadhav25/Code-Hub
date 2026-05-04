#include <stdio.h>
#include <stdlib.h>
struct node
{
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
struct node *reorder(struct node *head)
{
  if (head == NULL)
  {
    printf("List is Empty.\n");
    return NULL;
  }

  if (head->next == NULL)
  {
    return head;
  }

  struct node *temp = head, *temp_prev, *head_next;
  head_next = temp->next;
  while (temp->next != NULL)
  {
    temp_prev = temp;
    temp = temp->next;
  }
  head->next = temp;
  temp->next = head_next;
  temp_prev->next = NULL;
  return head;
}
void display(struct node *head)
{
  if (head == NULL)
  {
    printf("List is Empty.\n");
    return;
  }
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
  int n, i;
  printf("Enter initial number of nodes = ");
  scanf("%d", &n);

  struct node *head = NULL, *temp;
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
      temp->next = newnode;
      temp = newnode;
    }
  }
  display(head);
  head = reorder(head);
  display(head);
  return 0;
}