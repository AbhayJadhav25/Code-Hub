#include<stdio.h>
#include<stdlib.h>
struct queue{
    int rear;
    int front;
    int size;
    int *data;
};
int isFull(struct queue *q){
    return (((q->rear + 1)%q->size) == q->front) ;
}
int isEmpty(struct queue *q){
    return (q->front == -1);
}
void Enqueue(struct queue *q , int value){
    if(isFull(q)){
        printf("Queue is Full.\n");
        return;
    }

    if(q->front == -1){
        q->rear =0;
        q->front = 0;
    }else{
        q->rear = (q->rear + 1) % q->size;
    }
    q->data[q->rear] = value;
}
int Dequeue(struct queue *q){
    if(isEmpty(q)){
        printf("Queue is Empty.\n");
        return 0;
    }
    int val = -1;
    if(q->front == q->rear){
        val = q->data[q->front];
        q->front = -1;
        q->rear = -1;
    }else{
        val = q->data[q->front];
        q->front = (q->front + 1)%q->size;
    }
    printf("Dequeue Value =  %d\n",val);
    return val;
}
void display(struct queue *q){
    if(isEmpty(q)){
        printf("Queue is Empty.\n");
        return;
    }
    int i;
    i = q->front;

    while(1){
        printf("%d  ",q->data[i]);

        if(i==q->rear) break;

        i = (i+1) % q->size;
    }
    printf("\n");
}
int main(){
    struct queue *q;
    int choice , value;
    q = (struct queue *)malloc(sizeof(struct queue));
    q->rear = -1;
    q->front = -1;
    q->size = 5;
    q->data = (int *)malloc(q->size*sizeof(int));
    printf("\n===Circulare Queue Menu===\n1 : Enqueue\n2 : Dequeue\n3 : Display\n4 : Exit\n");

    while(1){
        printf("Enter your choice = ");
        scanf("%d",&choice);

        switch(choice){
         case 1: 
                printf("Enter Value to Enqueue = ");
                scanf("%d",&value);
                Enqueue(q , value);
                break;

            case 2 : 
                value =  Dequeue(q);
                break;

            case 3 : 
                display(q);
                break;
            case 4 : 
                exit(0);
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    }
    return 0;
}