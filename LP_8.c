#include<stdio.h> 
#include<stdlib.h>
int choice;
struct node{
    int info;
    struct node *lchild,*rchild;
}*root = NULL,*temp,*ptr,*cur;


void insert(){
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&temp->info);
    temp->lchild = NULL;
    temp->rchild = NULL;

    if(root == NULL)
    root = temp;

    else{
        ptr = root;
        while(ptr != NULL){
            cur = ptr;
        (temp->info >= ptr->info) ? ptr = ptr->rchild : ptr = ptr->lchild;
        }//end of while
    (temp->info >= cur->info) ? cur->rchild = temp : cur->lchild = temp;
    }
}//end of insert
void preorder(struct node *root){
    if(root == NULL)
    return;
    printf("%d\t",root->info);
    preorder(root->lchild);
    preorder(root->rchild);
}//end of preorders

void inorder(struct node *root){
    if(root == NULL)
    return;
    inorder(root->lchild);
    printf("%d\t",root->info);
    inorder(root->rchild);
    
}//end of inorder

void postorder(struct node *root){
    if(root == NULL)
    return;
     postorder(root->lchild);
     postorder(root->rchild);
    printf("%d\t",root->info);
    
}//end of postorder


int main(){
    while(1){
    printf("\npress 1.create BST 2.traverse 3.exit\n enter your choice\n");
    scanf("%d",&choice);
    switch (choice){
    case 1:insert();
        break;

    case 2: if(root == NULL)
    printf("tree is empty\n");
    printf("preorder :\n");
    preorder(root);
    printf("\ninorder :\n");
    inorder(root);
    printf("\npostorder :\n");
    postorder(root);
       break;

    case 3: exit(0);
        break;
    default:printf("invalid choice");
    }//end of switch
    }//end of while
    return 0;
}//end of main