#include<stdio.h>
#include<stdlib.h>
#include "header1.h"
int main(){
    struct stack *s;
    int ans , choice , value;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1;
    s->data = (int *)malloc(s->size*sizeof(int));

    printf("\n===Stack Menu===\n1 : push\n2 : pop\n3 : peek\n4 : display\n5 : Exit\n");

    while(1){
        printf("Enter Your Choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1 : 
                printf("Enter Value to push = ");
                scanf("%d",&value);
                ans = push(s,value);
                break;

            case 2:
                ans = pop(s);
                break;

            case 3 :
                ans = peek(s);
                break;

            case 4:
                display(s);
                break;
            case 5 :
                exit(0);
                break;

            default:
                printf("Invalid choice");
                break;
        }
    }
    return 0;
}