#include<stdio.h> 
#include<stdlib.h>
int n,i,a[50];
struct node{
    int info;
    struct node *lchild,*rchild;
}*root = NULL,*ptr,*temp;

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
if (root == NULL)
root = temp;
root->lchild = insert(a,root->lchild,2*i+1);
root->rchild = insert(a,root->rchild,2*i+2);
}//end of if 
return root;
}//end of insert

void inorder(struct node *root){
    if(root == NULL)
    return;
    inorder(root->lchild);
    printf("%d\t",root->info);
    inorder(root->rchild);
    
}
int main() {
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   printf("Enter the array elements\n");
   for ( i = 0; i < n; i++)
    scanf("%d",&a[i]); 
   ptr = insert(a,root,0);
   inorder(ptr);
 return 0; 
}