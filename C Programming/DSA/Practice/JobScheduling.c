#include <stdio.h>
#include <stdlib.h>
struct job
{
    int size;
    int front;
    int rear;
    int *data;
    int *pages;
};
static int TotalJobs = 0;
int isEmpty(struct job *p)
{
    if (p->front == -1 || p->front == p->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct job *p)
{
    if (p->rear == (p->size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int addJob(struct job *p)
{
    if (isFull(p))
    {
        printf("Cant't Handle more Job.\nJobs are Full.\n");
        return 0;
    }
    else
    {
        int id ,page;
        p->rear++;

        printf("Enter Job id = ");
        scanf("%d", &id);

        printf("Enter Number of pages = ");
        scanf("%d", &page);
        if (p->front == -1)
        {
            p->front = 0;
            p->data[p->rear] = id;
            p->pages[p->rear] = page;
        }
        else
        {
            p->data[p->rear] = id;
            p->pages[p->rear] = page;
        }
        TotalJobs++;
        return 1;
    }
}
int processJob(struct job *p){
    if(isEmpty(p)){
        printf("No Job for processing.\n");
        return 0;
    }else{
        int id = p->data[p->front];
        int page = p->pages[p->front];
        printf("\nId = %d \t pages = %d Job is Complete.\n",id,page);
        p->front++;
        TotalJobs--;
        return 1;
    }
}
void pendingJobs(struct job *p){
    if(isEmpty(p)){
        printf("Job Queue is Empty.\n");
        return;
    }else{
        printf("Pending Jobs are : \n");
        for(int i = p->front ; i<=p->rear;i++){
            printf("Id = %d\t Pages = %d\n",p->data[i] , p->pages[i]);
        }
    }
}
int main()
{
    int n, i, choice, id, page, ans;
    printf("Enter Number of initial Jobs = ");
    scanf("%d", &n);

    struct job *p = (struct job *)malloc(sizeof(struct job));
    p->size = 6;
    p->front = p->rear = -1;
    p->data = (int *)malloc(p->size * sizeof(int));
    p->pages = (int *)malloc(p->size * sizeof(int));

    printf("Enter Initial Jobs : \n");
    for (i = 0; i < n; i++)
    {
        ans = addJob(p);
    }
    printf("Total Jobs = %d\n",TotalJobs);
    while (1)
    {
        printf("\n====Printing Job Scheduling System====\n");
        printf("1 : Add Job\n2 : Process a Job\n3 : Show Pending Jobs \n4 : Jobs are Full\n5 : Jobs are Empty.\n6 : Exit\n");

        printf("Enter your choice = ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            ans= addJob(p);
            printf("Total Jobs = %d\n",TotalJobs);
            break;
        case 2:
            ans = processJob(p);
            printf("Total Jobs = %d\n",TotalJobs);
            break;
        case 3:
            pendingJobs(p);
            printf("Total Jobs = %d\n",TotalJobs);
            break;
        case 4:
            ans = isFull(p);
            if(ans){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
            break;
        case 5:
            ans = isEmpty(p);
            if(ans){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
            break;
        case 6:
            printf("Remaining Jobs = %d\n",TotalJobs);
            exit(0);
            break;

        default:
            printf("Invalid Choice.\n");
            break;
        }
    }
    return 0;
}