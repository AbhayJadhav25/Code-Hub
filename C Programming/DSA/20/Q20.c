#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int val){
    struct node *newnode ;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->right = NULL;
    newnode->left = NULL;
    return newnode;
}
struct node *helper(int arr[] , int start , int end){
    if(start > end){
        return NULL;
    }
    int mid = start + (end-start) / 2;

    struct node *root = createNode(arr[mid]);
    root->left = helper(arr , start ,mid-1);
    root->right = helper(arr , mid+1 ,end);

    return root;
}
struct node *binaryTree(int arr[] , int n){
    return helper(arr , 0 , n-1);
}
void inorder(struct node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    printf("%d  ",root->data);
    inorder(root->right);
}
int main(){
    int n ;
    printf("Enter size of an array : ");
    scanf("%d" , &n);

    int arr[n];
    printf("Enter value in array in Ascending order = ");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    struct node *root = NULL;
    root = binaryTree(arr , n);
    printf("Inorder Traversal = ");
    inorder(root);
    return 0;
}