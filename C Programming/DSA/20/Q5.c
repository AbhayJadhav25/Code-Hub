#include<stdio.h>
#include<stdlib.h>
struct queue{
    int data;
    struct queue *next;
};

struct queue *createNode(){
    struct queue *newnode;
    newnode = (struct queue *)malloc(sizeof(struct queue));
    printf("Enter value to Enqueue = ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
}
struct queue *Enqueue(struct queue *head){
    struct queue *newnode , *temp;
    newnode = createNode();

    if(head==NULL){
        return newnode;
    }
    temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    temp = newnode;
    return head;
}
struct queue *Dequeue(struct queue *head){
    struct queue *temp =head;
    if(head==NULL){
        printf("Queue is empty.\n");
        return NULL;
    }
    int value = head->data;
    head = head->next;
    free(temp);
    printf("Dequeue value = %d\n",value);
    return head;
}
void display(struct queue *head){
    struct queue *temp =head;
    if(head==NULL){
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
    struct queue *head = NULL;
    int choice;
    printf("\n===Queue Menu===\n1 : Enqueue\n2 : Dequeue\n3 : Display\n4 : Exit\n");
    
    while(1){
        printf("Enter your choice = ");
        scanf("%d",&choice);

        switch(choice){
            case 1: 
                head = Enqueue(head);
                break;

            case 2 : 
                head = Dequeue(head);
                break;

            case 3 : 
                display(head);
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