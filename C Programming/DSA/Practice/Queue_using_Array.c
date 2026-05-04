#include <stdio.h>
#include <stdlib.h>
struct queue
{
  int front;
  int rear;
  int size;
  int *data;
};
int isFull(struct queue *q)
{
  if (q->rear == q->size - 1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int isEmpty(struct queue *q)
{
  if (q->front == -1 || q->front > q->rear)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int Enqueue(struct queue *q, int val)
{
  if (isFull(q))
  {
    printf("Queue is Full.\n");
    return 0;
  }
  else
  {
    q->rear++;
    q->data[q->rear] = val;
    return 1;
  }
}
int Dequeue(struct queue *q)
{
  if (isEmpty(q))
  {
    printf("Queue is Empty.\n");
    return 0;
  }
  else
  {
    int data = q->data[q->front];
    q->front++;
    return data;
  }
}
void display(struct queue *q)
{
  if (isEmpty(q))
  {
    printf("Queue is Empty.\n");
    return;
  }

  for (int i = q->front; i <= q->rear; i++)
  {
    printf("%d  ", q->data[i]);
  }
  printf("\n");
}
int main()
{
  struct queue *q;
  int n, choice, value, ans;
  q = (struct queue *)malloc(sizeof(struct queue));
  q->size = 5;
  q->rear = -1;
  q->front = -1;
  q->data = (int *)malloc(q->size * (sizeof(int)));

  printf("Enter initial elements of queue = ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Enter Value = ");
    if (q->front == -1)
    {
      scanf("%d", &q->data[i]);
      q->front++;
      q->rear++;
    }
    else
    {
      q->rear++;
      scanf("%d", &q->data[i]);
    }
  }

  printf("\n====Queue Menu====\n1 : Enqueue\n2 : Dequeue\n3 : Display\n4 : Exit\n");
  while (1)
  {
    printf("Enter your choice = ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter Value = ");
      scanf("%d", &value);
      ans = Enqueue(q, value);
      if (ans)
      {
        printf("Operation Successful.\n");
      }
      else
      {
        printf("Operation Failed.\n");
      }
      break;

    case 2:
      ans = Dequeue(q);
      if (ans)
      {
        printf("Operation Successful.\nPopped Value = %d\n", ans);
      }
      else
      {
        printf("Operation Failed.\n");
      }
      break;

    case 3:
      display(q);
      break;

    case 4:
      printf("Exit from the program\n");
      exit(0);
      break;

    default:
      printf("Invalid Choice.\n");
      break;
    }
  }
  free(q->data);
  free(q);
  return 0;
}