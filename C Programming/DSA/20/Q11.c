#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *createNode(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(sizeof(struct node)));
    printf("Enter value = ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
}
struct node *create(struct node *head){
    struct node *newnode , *temp;
    newnode = createNode();
    if(head == NULL){
        return newnode;
    }
    temp = head;
    while(temp->next != NULL){
        temp = temp -> next;
    }
    temp->next = newnode;
    return head;
}
struct node *insertAtPos(struct node *head){
    int pos;
    printf("Enter Position = ");
    scanf("%d",&pos);

    struct node *newnode , *temp;
    newnode = createNode();
    
    temp = head;
    int i = 0;
    if(pos == 0 ||head==NULL){
        head = newnode;
        return head;
    }
    while(i!=pos-1){
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
struct node *deleteByValue(struct node *head){
    if(head==NULL){
        printf("List is Empty.\n");
        return NULL;
    }
    int value;
    printf("Enter Value to delete = ");
    scanf("%d",&value);

    struct node *temp = head;
    struct node *temp_prev = NULL;
    if(temp->data == value){
        head = head->next;
        free(temp);
        return head;
    }

    while(temp->data != value){
        temp_prev = temp;
        temp = temp->next;
    }
    temp_prev->next =  temp->next;
    free(temp);
    return head;
}
void display(struct node *head){
    struct node *temp = head;
    if(head == NULL){
        printf("List is Empty.\n");
        return;
    }
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    struct node *head = NULL;
    int choice;

    printf("\n===Linked List===\n1 : create\n2 : Display\n3 : Insert At the given position\n4 : Delete the node By given value\n5 : Exit\n");

    while(1){
        printf("Enter your choice = ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            head = create(head);
                break;

            case 2:
                display(head);
                break;

            case 3:
                head = insertAtPos(head);
                break;

            case 4:
                head = deleteByValue(head);
                break;

            case 5:
                exit(0);
                break;

            default:
                printf("Invalid Choice.\n");
                break;
        }
    }
    return 0;
}