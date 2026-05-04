#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct queue {
    int front, rear;
    int data[MAX];
};


void enqueue(struct queue *q, int val) {
    if (q->rear == MAX - 1) {
        printf("Queue Full\n");
        return;
    }
    if (q->front == -1) q->front = 0;
    q->data[++q->rear] = val;
}

int dequeue(struct queue *q) {
    if (q->front == -1 || q->front > q->rear) {
        return -1;
    }
    return q->data[q->front++];
}

int isEmpty(struct queue *q) {
    return (q->front == -1 || q->front > q->rear);
}


int adj[MAX][MAX];
int n;


void createGraph() {
    int e;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter edges (u v):\n");
    for(int i = 0; i < e; i++) {
        int u, v;
        scanf("%d %d", &u, &v);

        adj[u][v] = 1;
        adj[v][u] = 1; 
    }
}

void displayGraph() {
    printf("\nAdjacency Matrix:\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}

void BFS() {
    int start;
    int visited[MAX] = {0};
    struct queue q;

    q.front = -1;
    q.rear = -1;

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    printf("BFS Traversal: ");

    visited[start] = 1;
    printf("%d ", start);
    enqueue(&q, start);

    while (!isEmpty(&q)) {
        int node = dequeue(&q);

        for(int j = 0; j < n; j++) {
            if(adj[node][j] == 1 && visited[j] == 0) {
                printf("%d ", j);
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Create Graph\n");
        printf("2. Display Graph\n");
        printf("3. BFS Traversal\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createGraph();
                break;

            case 2:
                displayGraph();
                break;

            case 3:
                BFS();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}