#include<stdio.h>
#include<stdlib.h>
struct queue{
    int data;
    struct queue *next;
};
struct queue *front = NULL;
struct queue *rear = NULL;

void Enqueue(){
    struct queue *newnode;
    newnode = (struct queue *)malloc(sizeof(struct queue));

    if(newnode == NULL){
        printf("Memory allocation Failed.\n");
        return;
    }
    printf("Enter value to Enqueue = ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(front==NULL){
        front=rear=newnode;
    }else{
        rear->next = newnode;
        rear = newnode;
    }
}
void Dequeue(){
    if(front==NULL){
        printf("Queue is empty.\n");
        return ;
    }
    struct queue *temp;
    int value = front->data;
    front = front->next;
    if(front == NULL){
        rear = NULL;
    }
    free(temp);
    printf("Dequeue value = %d\n",value);
}
void display(){
    struct queue *temp =front;
    if(front==NULL){
        printf("Queue is empty.\n");
        return ;
    }
    while(temp !=NULL){
        printf("%d  ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    int choice;
    printf("\n===Queue Menu===\n1 : Enqueue\n2 : Dequeue\n3 : Display\n4 : Exit\n");
    
    while(1){
        printf("Enter your choice = ");
        scanf("%d",&choice);

        switch(choice){
            case 1: 
                Enqueue();
                break;

            case 2 : 
                Dequeue();
                break;

            case 3 : 
                display();
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