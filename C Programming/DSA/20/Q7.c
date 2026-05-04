#include<stdio.h>
#include<stdlib.h>
struct queue {
    int front;
    int rear;
    int *id;
    int *page;
    int capacity;
};
int isFull(struct queue *q){
    if(q->rear == q->capacity - 1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct queue *q){
    return ((q->front == -1)||(q->front > q->rear));
}
void addJob(struct queue *q , int jobId , int pages){
    if(isFull(q)){
        printf("Can't add new job.\n");
        return;
    }
    if(q->rear == -1){
        q->front = q->rear = 0;
    }else{
        q->rear++;
    }
    q->id[q->rear] = jobId;
    q->page[q->rear] = pages;
}
void processJob(struct queue *q){
    if(isEmpty(q)){
        printf("No jobs pending.\n");
        return;
    }
    int jobId = q->id[q->front];
    int pages = q->page[q->front];
    printf("Process Job : \nId = %d\tpages = %d\n",jobId,pages);

    q->front++;
}
void pendingJob(struct queue *q){
    if(isEmpty(q)){
        printf("No jobs pending.\n");
        return;
    }
    printf("Pending Jobs are : \n");
    for(int i = q->front ; i<=q->rear ; i++){
        printf("Job Id = %d \t\t Pages = %d\n",q->id[i] , q->page[i]);
    }
}
int main(){
   struct queue *q;
   int choice , jobId , pages;
   q = (struct queue *)malloc(sizeof(struct queue));
   q->front = -1;
   q->rear = -1;
   q->capacity = 5;

   q->id = (int *)malloc(sizeof(int) * q->capacity);
   q->page = (int *)malloc(sizeof(int) * q->capacity);

   printf("\n===Job Processor\n1 : Add Job\n2 : Process JOb\n3 : Display Pending Job\n4 : Exit\n");

   while(1){
        printf("Enter your choice = ");
        scanf("%d",&choice);

        switch(choice){
            case 1: 
                printf("Enter Job Id = ");
                scanf("%d",&jobId);
                printf("Enter Number of Pages = ");
                scanf("%d",&pages);
                addJob(q,jobId,pages);
                break;
            case 2 : 
                processJob(q);
                break;
            case 3 : 
                pendingJob(q);
                break;
            case 4: 
                exit(0);
                break;
            
            default:
                printf("Invalid choice.\n");
                break;
        }
   }
   return 0;
}