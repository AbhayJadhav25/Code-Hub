#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct queue
{
    int rear;
    int front;
    int data[MAX];
};
void Enqueue(struct queue *q, int val)
{
    if (q->rear == MAX - 1)
    {
        printf("Queue Full.\n");
        return;
    }

    if (q->front == -1)
    {
        q->front = 0;
    }

    q->data[++q->rear] = val;
}
int Dequeue(struct queue *q)
{
    if (q->front == -1 || q->front > q->rear)
    {
        printf("Queue is Empty\n");
        return -1;
    }
    return q->data[q->front++];
}
int isEmpty(struct queue *q)
{
    return (q->rear == -1 || q->front > q->rear);
}
int adj[MAX][MAX];
int n;
void create()
{
    int e;
    printf("Enter Number of Nodes = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = 0;
        }
    }

    printf("Enter Number of Edges = ");
    scanf("%d", &e);

    printf("Enter G(V , E) = \n");
    for (int i = 0; i < e; i++)
    {
        int u, v;
        scanf("%d%d", &u, &v);

        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}
void Display()
{
    printf("Graph Adjacency Matrxi = \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d   ", adj[i][j]);
        }
        printf("\n");
    }
}
void BFS(){
    int start ;
    int visited[MAX] = {0};
    struct queue q;

    q.front = q.rear = -1;
    
    printf("Enter starting Index = ");
    scanf("%d",&start);

    printf("%d  ",start);
    visited[start] = 1;
    Enqueue(&q,start);

    while(!isEmpty(&q)){
        int node = Dequeue(&q);
        for(int j = 0 ; j<n ;j++){
            if(adj[node][j]==1 && visited[j]==0){
                printf("%d  ",j);
                visited[j] = 1;
                Enqueue(&q,j);
            }
        }
    }
    printf("\n");
}
int main()
{
    int choice;
    printf("\n====Graph Menu====\n1 : Create Graph\n2 : Display Adjacency Matrix\n3 : BFS Traverse\n4 : Exit\n");
    while (1)
    {
        printf("Enter Your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            Display();
            break;

        case 3:
            BFS();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}