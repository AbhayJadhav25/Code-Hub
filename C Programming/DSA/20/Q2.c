#include<stdio.h>
#include<stdlib.h>
#include "header2.h"
int main(){
    int choice , value ,ans;
    struct stack *head=NULL;
    printf("\n===Stack Menu===\n1 : push\n2 : pop\n3 : peek\n4 : display\n5 : Exit\n");

    while(1){
        printf("Enter Your Choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                head = push(head);
                break;
            
            case 2 : 
                head = pop(head);
                break;
                
            case 3 :
                ans = peek(head); 
                break;
                
            case 4 : 
                display(head);
                break;
            case 5 : 
                exit(0);
                break;

            default :
                printf("Inavlid choice.\n");
                break;
        }
    }
    return 0;
}