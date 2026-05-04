#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
static int count = 0;
struct node *createNode(){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Value = ");
    scanf("%d",&newNode->data);
    newNode->next = NULL;
    return newNode;
}
struct node *create(struct node *head){
    struct node *newnode , *temp = head;
    newnode = createNode();

    if(head==NULL){
        head = newnode;
        head->next = head;
        count++;
        return head;
    }
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    temp = newnode;
    count++;
    return head;

}
struct node *insertAtFirst(struct node *head){
    struct node *newnode;
    newnode = createNode();

    if(head == NULL){
        newnode->next = newnode;
        head = newnode;
        count++;
        return head;
    }
    struct node *temp=head;
    while(temp->next!=head){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    head = newnode;
    count++;
    return head;
}
struct node *deleFromEnd(struct node *head){
    if(head==NULL){
        printf("List is Empty.\n");
        return NULL;
    }
    if(head->next == head){
        free(head);
        count--;
        return NULL;
    }
    struct node *temp ,*temp_prev = NULL;
    temp= head;
    while(temp->next!=head){
        temp_prev = temp;
        temp=temp->next;
    }
    temp_prev->next = head;
    free(temp);
    count--;
    return head;
}
void search(struct node *head){
    struct node *temp = head;
    int val;
    printf("Enter Value to search = ");
    scanf("%d",&val);

    if(head==NULL){
        printf("List is Empty.\n");
        return;
    }
    if(head->data == val){
        printf("Value Found\n");
        return;
    }
    while(temp->next !=head){
        if(temp->data==val){
            printf("Value Found\n");
            return;
        }
        temp = temp->next;
    }
    printf("Value Not Found\n");
}
struct node *insertAtEnd(struct node *head){
    struct node *newnode = createNode();
    struct node *temp = head;
    if(head==NULL){
        newnode->next = newnode;
        head = newnode;
        count++;
        return head;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    count++;
    return head;
}
struct node *deleteFromBegging(struct node *head){
    if(head == NULL){
        printf("List is Empty\n");
        return NULL;
    }
    if(head->next == head){
        free(head);
        count--;
        return NULL;
    }
    struct node *temp = head;
    struct node *temp1 = head;

    while(temp1->next != head){
        temp1 = temp1->next;
    }

    head = head->next;
    temp1->next = head;
    free(temp);
    count--;
    return head;
}
void display(struct node *head){
    struct node *temp = head->next;
    printf("%d -> ",head->data);

    while(temp!=head){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    int choice , ans , value;
    struct node *head = NULL;

    printf("\n===Circular Linked List===\n1 : Create\n2 : Display\n3 : Insert at begging\n4 : Delete from end\n5 : search Element\n6 : Insert at end\n7 : Delete From Begging\n8 : Count Nodes\n9: Exit\n");

    while(1){
        printf("Enter your choice = ");
        scanf("%d",&choice);

        switch(choice){
            case 1: 
                head = create(head);
                break;
            case 3: 
               head =  insertAtFirst(head);
                break;
            case 2: 
                display(head);
                break;
            case 4: 
                head = deleFromEnd(head);
                break;
            case 5: 
                search(head);
                break;

            case 6:
                head = insertAtEnd(head);
                break;
            
            case 7:
                head = deleteFromBegging(head);
                break;

            case 8:
                printf("Total Number nodes = %d\n",count);
                break;
            case 9: 
                exit(0);
                break;
        }
    }
}
