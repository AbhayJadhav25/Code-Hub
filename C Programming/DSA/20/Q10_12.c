#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
static int nodes = 0;
struct node *createNode(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data = ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    nodes++;
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
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    temp = newnode;
    return head;
}

void display(struct node *head){
    if(head==NULL){
        printf("List is Empty.\n");
        return;
    }
    struct node *temp = head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct node *insertAtPos(struct node *head , int pos){
    if(pos < 0 || pos > nodes){
    printf("Invalid position.\n");
    return head;
    }
   
    struct node *newnode;
    newnode = createNode();

    if(newnode == NULL){
        printf("Memory allocation Failed.Heap memory Exhausted.\n");
        return NULL;
    }
   
    if(pos == 0){
        if(head!=NULL){
           head->prev = newnode;
        }
        newnode->next = head;
        head = newnode;
        return head;
    }
    int i = 0;
    struct node *temp = head;
    while(i!=pos-1){
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    if(temp->next!=NULL){
        temp->next->prev =NULL;
    }
    temp->next = newnode;
    return head;
}
struct node *deleteFromBegging(struct node *head){
    if(head==NULL){
        printf("List is Empty.\n");
        return NULL;
    }
    struct node *temp = head;
    head = head->next;
    head->prev = NULL;
    nodes--;
    free(temp);
    return head;

}
struct node *insertAtBegging(struct node *head){
    struct node *newnode;
    newnode = createNode();
    if(newnode == NULL){
        printf("Memory allocation Failed.\nHeap Memory Exhausted.\n");
        return NULL;
    }
    if(head==NULL){
        return newnode;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    return head;
}
struct node *deleteFromEnd(struct node *head){
    if(head == NULL){
        printf("List is Empty.\n");
        return NULL;
    }
    if(head->next == NULL){
        free(head);
        return NULL;
    }
    struct node *temp = head , *temp_prev = NULL;
    while(temp->next != NULL){
        temp_prev = temp;
        temp = temp->next;
    }
    temp_prev->next = NULL;
    free(temp);
    return head;
}
void search(struct node *head , int value){
    if(head == NULL){
        printf("List is Empty.\n");
        return;
    }
    if(head->data == value){
        printf("Value Found.\n");
        return;
    }
    struct node *temp = head ;
    while(temp != NULL){
        if(temp->data == value){
            printf("Value Found.\n");
            return;
        }
        temp=temp->next;
    }
    printf("Value not Found.\n");
    return;
}
int main(){
    struct node *head=NULL;
    int value , choice ,pos;

    printf("\n===Doubly Linked List Menu===\n1 : Create\n2 : Display\n3 : Insert at the given position\n4 : Delete from the Beginning\n5 : Count Nodes\n6 : Insert at the Begging\n7 : Delete from the end\n8 : Search the Elemnt\n9 : Exit\n");
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
                printf("Enter Position = ");
                scanf("%d",&pos);
                head = insertAtPos(head , pos);
                break;
            case 4: 
                head = deleteFromBegging(head);
                break;
            case 5: 
                printf("Total Nodes = %d\n",nodes);
                break;
            case 6: 
                head = insertAtBegging(head);
                break;
            case 7: 
                head = deleteFromEnd(head);
                break;
            case 8: 
                printf("Enter value to search = ");
                scanf("%d",&value);
                search(head , value);
                break;
            case 9: 
                exit(0);
                break;
        }
    }
    return 0;
}