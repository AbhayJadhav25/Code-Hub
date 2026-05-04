#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(struct node *root)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data = ");
    scanf("%d", &newnode->data);
    newnode->left = NULL;
    newnode->right = NULL;

    struct node *temp;

    temp = root;
    if (root == NULL)
    {
        root = newnode;
        temp = root;
    }
    else
    {
        while (1)
        {
            if (newnode->data < temp->data)
            {
                if (temp->left == NULL)
                {
                    temp->left = newnode;
                    break;
                }
                else
                {
                    temp = temp->left;
                }
            }
            else
            {
                if (temp->right == NULL)
                {
                    temp->right = newnode;
                    break;
                }
                else
                {
                    temp = temp->right;
                }
            }
        }
        return root;
    }
}
void Inorder(struct node *root)
{
    struct node *temp;
    temp = root;
    if (temp == NULL)
    {
        // printf("Null\n");
        return;
    }
    else
    {
        Inorder(temp->left);
        printf("%d -> ", temp->data);
        Inorder(temp->right);
    }
}
void Preoder(struct node *root)
{
    struct node *temp;
    temp = root;
    if (temp == NULL)
    {
        // printf("Null\n");
        return;
    }
    else
    {
        printf("%d -> ", temp->data);
        Preoder(root->left);
        Preoder(root->right);
    }
}

void Postorder(struct node *root)
{
    struct node *temp;
    temp = root;
    if (temp == NULL)
    {
        // printf("Null\n");
        return;
    }
    else
    {
        Postorder(root->left);
        Postorder(root->right);
        printf("%d  ", root->data);
    }
}

int search(struct node *root, int val, int pos)
{
    struct node *temp = root;
    if (temp == NULL)
    {
        printf("Value not found\n");
        return -1;
    }
    if (temp->data == val)
    {
        printf("Value found at %d position\n", pos);
        return pos;
    }
    if (val < temp->data)
    {
        return search(temp->left, val, pos + 1);
    }
    else
    {
        return search(temp->right, val, pos + 1);
    }
}
struct node *inOrderPredecessor(struct node *root)
{
    root = root->left;
    while (root->right != NULL)
    {
        root = root->right;
    }
    return root;
}
struct node *deleteNode(struct node *root, int value)
{
    struct node *iPre;

    if (root == NULL)
    {
        return NULL;
    }

    // search for the node to be deleted.

    if (value < root->data)
    {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data)
    {
        root->right = deleteNode(root->right, value);
    }

    // Deletion strategy
    else
    {
        
        if (root->left == NULL && root->right == NULL)
        {
        free(root);
        return NULL;
        }else if(root->left == NULL){
            struct node *temp = root->right;
            free(root);
            return temp;
        }else if(root->right == NULL){
            struct node *temp = root->left;
            free(root);
            return temp;
        }else{
            iPre = inOrderPredecessor(root);
            root->data = iPre->data;
            root->left = deleteNode(root->left, iPre->data);
        }
    }
    return root;
}

int maximum(struct node *root)
{
    if (root == NULL)
    {
        printf("Tree is Empty\n");
        return 0;
    }
    if (root->right == NULL)
    {
        printf("Maximum = %d\n", root->data);
        return 1;
    }
    return maximum(root->right);
}
int minimum(struct node *root)
{
    if (root == NULL)
    {
        printf("root is Empty.\n");
        return 0;
    }
    if (root->left == NULL)
    {
        printf("Minimum = %d\n", root->data);
        return 1;
    }
    return minimum(root->left);
}
int main()
{
    int n, ch, value, ans;
    printf("Enter Initial number of node : ");
    scanf("%d", &n);
    struct node *root = NULL;

    for (int i = 0; i < n; i++)
    {
        root = createNode(root);
    }

    printf("\n====Binary Search Tree====\n1 : Insert Node\n2 : Inorder Traversal\n3 : Preorder Traversal\n4 : PostOrder Traversal\n5 : Search Node\n6 : Delete Node\n7 : Find Maximum\n8 : Find Minimum\n9: Exit\n");

    while (1)
    {
        printf("Enter your choice :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            root = createNode(root);
            break;

        case 2:
            printf("Inorder Traversal : \n");
            Inorder(root);
            printf("Null\n");
            break;

        case 3:
            printf("Preoder Traversal : \n");
            Preoder(root);
            printf("Null\n");
            break;

        case 4:
            printf("Postorder Traversal : \n");
            Postorder(root);
            printf("Null\n");
            break;

        case 5:
            printf("Enter Value to search : ");
            scanf("%d", &value);

            ans = search(root, value, 0);
            break;

        case 6:
            printf("Enter Value to delete : ");
            scanf("%d", &value);
            root = deleteNode(root, value);
            break;
        case 7:
            ans = maximum(root);
            break;

        case 8:
            ans = minimum(root);
            break;
        case 9:
            exit(0);
            break;
        }
    }
}
