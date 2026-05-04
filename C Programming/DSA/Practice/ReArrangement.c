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
  if (head == NULL || head->next == NULL)
    return head;

  // Step 1: Count nodes
  int count = 0;
  struct node *temp = head;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }

  // Step 2: Store all node pointers in array
  struct node **arr = (struct node **)malloc(count * sizeof(struct node *));

  temp = head;
  for (int i = 0; i < count; i++)
  {
    arr[i] = temp; // store address of each node
    temp = temp->next;
  }

  // Step 3: Relink using left & right index
  int left = 0, right = count - 1;

  while (left < right)
  {
    arr[left]->next = arr[right]; // L0  → Ln
    left++;

    if (left == right) // odd number of nodes
      break;

    arr[right]->next = arr[left]; // Ln  → L1
    right--;
  }

  arr[left]->next = NULL; // last node → NULL

  free(arr);
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