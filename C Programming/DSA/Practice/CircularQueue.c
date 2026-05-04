#include <stdio.h>
#include <stdlib.h>
struct queue
{
  int size;
  int rear;
  int front;
  int *data;
};
int isFull(struct queue *q)
{
  if ((q->rear + 1) % q->size == q->front)
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
  if (q->front == -1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void Enqueue(struct queue *q, int value)
{
  if (isFull(q))
  {
    printf("Queue is Full.\n");
    return;
  }
  else if (q->front == -1)
  {
    q->front = 0;
    q->rear = 0;
  }
  else
  {
    {
      q->rear = (q->rear + 1) % q->size;
    }
  }
  q->data[q->rear] = value;
}

int Dequeue(struct queue *q)
{
  int val = -1;
  if (isEmpty(q))
  {
    printf("Queue is underflow.\n");
    return val;
  }
  else if (q->front == q->rear)
  {
    val = q->data[q->front];
    q->front = -1;
    q->rear = -1;
  }
  else
  {
    val = q->data[q->front];
    q->front = (q->front + 1) % q->size;
  }
  return val;
}
void display(struct queue *q)
{
  if (isEmpty(q))
  {
    printf("Queue is Empty.\n");
    return;
  }
  int i;

  i = q->front;

  while (1)
  {
    printf("%d  ", q->data[i]);

    if (i == q->rear)
    {
      break;
    }

    i = (i + 1) % q->size;
  }
}

int main()
{
  struct queue *q;
  int n, choice, value, i, ans;

  q = (struct queue *)malloc(sizeof(struct queue));

  q->size = 5;
  q->rear = -1;
  q->front = -1;

  q->data = (int *)malloc(q->size * sizeof(int));

  // printf("Enter initial elements of queue = ");
  // scanf("%d", &n);

  // for (int i = 0; i < n; i++)
  // {
  //   printf("Enter Value = ");
  //   if (q->front == -1)
  //   {
  //     scanf("%d", &q->data[i]);
  //     q->front++;
  //     q->rear++;
  //   }
  //   else
  //   {
  //     q->rear = (q->rear + 1) % q->size;
  //     scanf("%d", &q->data[q->rear]);
  //   }
  // }

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
      Enqueue(q, value);
      break;

    case 2:
      ans = Dequeue(q);
      if (ans != -1)
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