#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *right;
    struct node *left;
};
struct node *createNode(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value = ");
    scanf("%d",&newnode->data);

    newnode->right = NULL;
    newnode->left = NULL;

    return newnode;
}
struct node *insertNode(struct node *root){
    struct node *newnode;
    newnode = createNode();
    if(root==NULL){
        root = newnode;
        return root;
    }
    struct node *temp = root;
    while(1){
        if(newnode->data < temp->data){
            if(temp->left == NULL){
                temp->left = newnode;
                break;
            }else{
                temp = temp->left;
            }
        }else{
            if(temp->right == NULL){
                temp->right = newnode;
                break;
            }else{
                temp = temp->right;
            }
        }
    }
    return root;
}
void inorder(struct node *root){
    struct node *temp;
    temp = root;

    if(temp==NULL){
        return;
    }
        inorder(temp->left);
        printf("%d  ",temp->data);
        inorder(temp->right);
    
}
void postorder(struct node *root){
    struct node *temp;
    temp =root;

    if(temp==NULL){
        return;
    }
        postorder(temp->left);
        postorder(temp->right);
        printf("%d  ",temp->data);
    
}
void preorder(struct node *root){
    struct node *temp;
    temp = root;

    if(temp==NULL){
        return;
    }
        printf("%d  ",temp->data);
        preorder(temp->left);
        preorder(temp->right);
}
int search(struct node *root , int value){
    if(root==NULL){
        printf("Value not found.\n");
        return 0;
    }
    struct node *temp = root;
    if(temp->data == value){
        printf("Value Found.\n");

        return 1;
    }
    if(value<temp->data){
       return search(temp->left,value);
    }else{
        return search(temp->right , value);
    }
}
void maximum(struct node *root){
    struct node *temp = root;
    if(temp==NULL){
        printf("Tree is Empty.\n");
        return;
    }
    if(temp->right == NULL){
        printf("Maximum = %d\n",temp->data);
        return;
    }
    maximum(temp->right);
}
void minimum(struct node *root){
    struct node *temp = root;
    if(temp==NULL){
        printf("Tree is Empty.\n");
        return;
    }
    if(temp->left == NULL){
        printf("Minimum = %d\n",temp->data);
        return;
    }
    minimum(temp->left);
}
struct node *inOrderPredecessor(struct node *root){
    root = root->left;
    while(root->right !=NULL){
        root = root->right;
    }
    return root;
}
struct node *delete(struct node *root , int value){
    struct node *iPre;
    if(root==NULL){
        return NULL;
    }

    if(value < root->data){
        root->left =  delete(root->left , value);
    }else if(value>root->data){
        root->right = delete(root->right , value);
    }else{

        if(root->right == NULL && root->left == NULL){
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
            root->left = delete(root->left , iPre->data);
        }
    }
    return root;
}
int main(){
    int choice , value ,ans ;
    struct node *root = NULL;

    printf("\n====Binary Tree Menu====\n1 : Create\n2 : Search\n3 : Inorder\n4 : Preorder\n5 : Postorder\n6 : Maximum\n7 : Minimum\n8 : Delete\n9: Exit");
    while(1){
        printf("Enter your choice = ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                root = insertNode(root);
                break;

            case 2 :
                printf("Enter Value to search = ");
                scanf("%d",&value);
                ans = search(root , value);
                break;

            case 3:
                inorder(root);
                break;

            case 4 :
                preorder(root);
                break;

            case 5:
                postorder(root);
                break;

            case 6 :
                maximum(root);
                break;

            case 7:
                minimum(root);
                break;
            
            case 8:
                printf("Enter Value to Delete = ");
                scanf("%d",&value);
                root = delete(root, value);
                break;
            case 9:
                exit(0);
                break;
        }
    }
    return 0;
}