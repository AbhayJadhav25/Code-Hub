#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *createNode(){
  struct node *newnode;
  newnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter Value = ");
  scanf("%d",&newnode->data);
  newnode->next = NULL;
  return newnode;
}
struct node *append(struct node *head){
  struct node *newnode , *temp;
  newnode = createNode();
  if(head==NULL){
    return newnode;
  }
  temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newnode;
  temp = newnode;
  return head;
}
struct node *insertByPos(struct node *head , int pos){
  struct node *newnode , *temp;
  newnode = createNode();
  temp = head;
  int i= 0;

  while(i < pos-1){
    temp = temp->next;
    i++;
  }
  newnode->next = temp->next;
  temp->next = newnode;
  return head;
}

struct node *deleteByValue(struct node *head ,int value){
  struct node *temp , *temp1;
  temp1 = head;

  while(temp1->data !=value){
    temp = temp1;
    temp1 = temp->next;
  }
  temp->next = temp1->next;
  free(temp1);
  return head;
}
void display(struct node *head){
  struct node *temp = head;

  while(temp!=NULL){
    printf("%d -> ",temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}
int main(){

  struct node *head = NULL;
  int choice , pos;
  printf("\n===LL Menu===\n1 : Createnode\n2 : Insert at middle\n3 : Delete by value\n4 : Display\n5 : Exit");

  while(1){
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice){
      case 1:
        head = append(head);
        break;
      
        case 2 :
          printf("Enter Position to insert : ");
          scanf("%d",&pos);
          head = insertByPos(head , pos);
          break;
      case 5:
        exit(0);
        break;

      case 4:
        display(head);
        break;

      case 3 : 
        printf("Enter value : ");
        scanf("%d",&pos);
        head = deleteByValue(head , pos);
        break;
    }
  }


  return 0;

}