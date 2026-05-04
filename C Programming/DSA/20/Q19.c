#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *createNode()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data = ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
}
struct node *removeDuplicate(struct node *head)
{
    if (head == NULL)
    {
        printf("List is Empty.\n");
        return NULL;
    }
    if (head->next == NULL)
    {
        printf("List has only one element.\n");
        return head;
    }
    struct node *dummy, *prev, *current;
    dummy = (struct node *)malloc(sizeof(struct node));
    dummy->next = head;
    prev = dummy;
    current = head;
    while (current != NULL)
    {
        if (current->next != NULL && current->data == current->next->data)
        {
            int data = current->data;
            while (current != NULL && data == current->data)
            {
                current = current->next;
            }
            prev->next = current;
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }

    return dummy->next;
}
void display(struct node *head)
{
    if (head == NULL)
    {
        printf("List is Empty.\n");
        return;
    }
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    struct node *head = NULL, *temp;
    int n;
    printf("Enter size of list : ");
    scanf("%d", &n);

    printf("Enter values in Ascending order :\n");
    for (int i = 0; i < n; i++)
    {
        struct node *newnode;
        newnode = createNode();

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    head = removeDuplicate(head);
    display(head);
    return 0;
}