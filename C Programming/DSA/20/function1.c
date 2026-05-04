#include<stdio.h>
#include "header1.h"
int isFull(struct stack *s){
    return (s->top == (s->size-1));
}
int isEmpty(struct stack *s){
    return (s->top == -1);
}
int push(struct stack *s , int val){
    if(isFull(s)){
        printf("Stack is Overflow.\n");
        return 0;
    }
    s->top++;
    s->data[s->top] = val;
    return 1;
}
int pop(struct stack *s){
    if(isEmpty(s)){
        printf("Stack is underflow.\n");
        return 0;
    }
    int val = s->data[s->top];
    s->top--;
    printf("Popped Value = %d\n",val);
    return 1;
}
int peek(struct stack *s){
    if(isEmpty(s)){
        printf("Stack is underflow.\n");
        return 0;
    }
    printf("Topped Value = %d\n",s->data[s->top]);
    return 1;
}
void display(struct stack *s){
    if(isEmpty(s)){
        printf("Stack  is Empty");
        return;
    }
    for(int i =0 ; i<=s->top ; i++){
        printf("%d  ",s->data[i]);
    }
    printf("\n");
}