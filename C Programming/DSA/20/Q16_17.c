#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct queue{
    int rear , front;
    int data[MAX];
};
void enqueue(struct queue *q, int val){
    if(q->rear == MAX-1){
        return;
    }
    if(q->front == -1){
        q->front = q->rear = 0;
    }
    q->data[++q->rear] = val;
}
int dequeue(struct queue *q){
    if(q->front == -1 || q->front > q->rear){
        return 0;
    }
    return q->data[q->front++];
}
int isEmpty(struct queue *q){
    return (q->front == -1 || q->front > q->rear);
}
int adj[MAX][MAX];
int node;
void create(){
    int edge;
    printf("Enter number of node : ");
    scanf("%d",&node);

    for(int i = 0 ; i<node ; i++){
        for(int j = 0 ; j<node ; j++){
            adj[i][j] = 0;
        }
    }

    printf("Enter number of edge = ");
    scanf("%d",&edge);

    printf("Enter G( V ,E) :\n");
    for(int i = 0 ; i<edge ; i++){
        int u,v;
        scanf("%d%d",&u,&v);

        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}
void display(){
    printf("Adjacency Matrix : \n");
    for(int i = 0 ; i<node ; i++){
        for(int j=0 ; j<node;j++){
            printf("%d  ",adj[i][j]);
        }
        printf("\n");
    }
}
void BFS(){
    struct queue q;
    q.front = q.rear = -1;

    int start , searchCount =0 ;
    int visited[MAX] = {0};
    
    printf("Enter Eelement to start : ");
    scanf("%d",&start);
    if(start>node){
        while(start>node){
        printf("Enter valid node : ");
        scanf("%d",&start);
        }
    }
    printf("%d  ",start);
    visited[start] = 1;
    enqueue(&q , start);

    while(!isEmpty(&q)){
        int qnode = dequeue(&q);
        for(int i = 0 ; i<node ; i++){
            if(adj[qnode][i]==1 && visited[i]==0){
                printf("%d  ",i);
                visited[i] = 1;
                enqueue(&q,i);
            }
        }
    }
    printf("\n");

}
int main(){
    int choice;

    printf("\n===Graph Menu===\n1 : Create\n2 : Display\n3 : BFS\n4 : exit\n");
    while(1){
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                create();
                break;

            case 2:
                display();
                break;
            case 3 : 
                BFS();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice");
        }
    }
    
    return 0;
}