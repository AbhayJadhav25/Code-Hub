#include<stdio.h>
#include "header2.h"
#include<stdlib.h>
struct stack *createstack(){
    struct stack *newstack;
    newstack = (struct stack *)malloc(sizeof(struct stack));
    int value;
    printf("Enter Value to push = ");
    scanf("%d",&newstack->data);
    newstack->next = NULL;
    return newstack;
}
struct stack *push(struct stack *head){
    struct stack *new;
    new = createstack();
    if(new == NULL){
        printf("Can't insert.\nHeap memory is exhausted.\n");
        return NULL;
    }
    if(head==NULL){
        return new;
    }
    new->next = head;
    head = new;
    return head;
}
struct stack *pop(struct stack *head){
    if(head==NULL){
        printf("Stack is underflow.\n");
        return NULL;
    }
    struct stack *temp;
    int val = head->data;
    temp = head->next;
    head = temp;
    printf("Popped Value = %d\n",val);
    return head;
}
int peek(struct stack *head){
    if(head==NULL){
        printf("Stack is Underflow.\n");
        return 0;
    }
    printf("Topped Value = %d\n",head->data);
    return 1;
}
void display(struct stack *head){
    struct stack *temp;
    temp = head;

    if(temp==NULL){
        printf("Stack is underflow.\n");
        return;
    }

    while(temp!=NULL){
        printf("%d  ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}