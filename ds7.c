#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *lchild, *rchild;
}*root = NULL,*temp,*ptr;


int a[50],n,i;

struct node *create(int data){
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = data;
    temp->lchild = NULL;
    temp->rchild = NULL;
    return temp;
}//end of create



struct node *insert(int a[],struct node *root,int i){
    temp = create(a[i]);
    if(i<n){
        if(root == NULL)
        root = temp;
        root->lchild = insert(a,root->lchild,2*i+1);
        root->rchild = insert(a,root->rchild,2*i+2);
    }
    return root;
}//end of insert

void inorder(struct node *root){
    if(root == NULL)
    return;
    inorder(root->lchild);
    printf("%d\t",root->info);
    inorder(root->rchild);
}

int main(){
    printf("enter the number elements\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0; i<n; i++)
    scanf("%d",&a[i]);
    ptr = insert(a,root,0);
    inorder(ptr);
    return 0;
}