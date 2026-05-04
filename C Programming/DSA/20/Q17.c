#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct stack{
    int top;
    int data[MAX];
};
int isFull(struct stack *s){
    return (s->top == MAX-1);
}
int isEmpty(struct stack *s){
    return (s->top == -1);
}
void push(struct stack *s , int val){
    if(isFull(s)){
        return;
    }
    s->data[++s->top] = val;
}
int pop(struct stack *s){
    if(isEmpty(s)){
        return -1;
    }
    return s->data[s->top--];
}
int adj[MAX][MAX];
int node;
void create(){
    int edge;
    printf("Enter number of nodes = ");
    scanf("%d",&node);

    for(int i = 0 ; i<node ; i++){
        for(int j = 0 ; j<node ; j++){
            adj[i][j] = 0;
        }
    }
    printf("Enter number of edge = ");
    scanf("%d",&edge);
    printf("Enter G(U , V) : \n");
    for(int i = 0 ; i<edge ; i++){
        int u,v;
        scanf("%d%d",&u,&v);

        adj[u][v] = 1;
        adj[v][u] = 1;
    }
}
void DFS(){
    int start;
    int visited[MAX] = {0};
    struct stack s;
    s.top = -1;
    printf("Enter start = ");
    scanf("%d",&start);

    if(start > node){
        while(start>node){
            printf("Enter Valid start node = ");
            scanf("%d",&start);
        }
    }
    visited[start] = 1;
    push(&s,start);

    while(!isEmpty(&s)){
        int snode = pop(&s);
        printf("%d  ",snode);
        for(int i = 0; i<node ; i++){
            if(adj[snode][i] == 1 && visited[i]==0){
                // printf("%d  ",i);
                visited[i] = 1;
                push(&s,i);
            }
        }
    }
    printf("\n");
}
void display(){
    printf("Adjacency Matrix : \n");
    for(int i= 0 ; i<node ; i++){
        for(int j = 0 ; j<node ;j++){
            printf("%d  ",adj[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int choice;
    printf("\n====DFS Graph====\n1 : Create\n2 : Display\n3 : DFS\n4 : Exit\n");
    while(1){
        printf("Enter your choice = ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                create();
                break;
            
            case 2:
                display();
                break;

            case 3:
                DFS();
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Invaild choice\n");
                break;
        }
    }
    return 0;
}