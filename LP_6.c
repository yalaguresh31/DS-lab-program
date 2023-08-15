#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
struct node{
    int id;
    char name[20];
    char branch[20];
    char area[20];
    struct node *llink;
    struct node *rlink;
}*start = NULL,*temp,*ptr,*cur;
int choice,i,n;
void insertbeg(){
  temp = (struct node *) malloc(sizeof(struct node));
  printf("Enter id,name,branch,area of specialization\n");
  scanf("%d %s %s %s",&temp->id,temp->name,temp->branch,temp->area);
  temp->llink = NULL;
  temp->rlink = NULL;

  if(start == NULL)
  start = temp;
    
  else{
    temp->rlink = start;
    start->llink = temp;
    start = temp;
  }
}//end of insertbeg

void traverse(){
    int count=0;
    if(start == NULL)
    printf("List is empty\n");
    else{
        ptr = start;
        while(ptr != NULL){
            printf("%d\t%s\t%s\t%s\n",ptr->id,ptr->name,ptr->branch,ptr->area);
            ptr = ptr->rlink;
            count++;
        }
        printf("number of node %d\n",count);
    }
}//end of travetse

void insertend(){
  temp = (struct node *) malloc(sizeof(struct node));
  printf("Enter id,name,branch,area of specialization\n");
  scanf("%d %s %s %s",&temp->id,temp->name,temp->branch,temp->area);
  temp->llink = NULL;
  temp->rlink = NULL;

  if(start == NULL)
  start = temp;

  else{
    ptr = start;
    while(ptr->rlink != NULL)
        ptr = ptr->rlink;
    
    ptr->rlink =temp;
    temp->llink = ptr;
  }
}//end of insertend

void deletebeg(){
    if(start == NULL)
    printf("list is empty!! No node to delete\n");

    else if(start->rlink == NULL){
        printf("%d\t%s\t%s\t%s\n",start->id,start->name,start->branch,start->area);
        free(start);
        start = NULL;
    }

    else{
        ptr = start;
        start = start->rlink;
        printf("%d\t%s\t%s\t%s\n",ptr->id,ptr->name,ptr->branch,ptr->area);
        free(ptr);
        start->llink = NULL;
    }
}//end of deletebeg


void deleteend(){
  if(start == NULL)
    printf("list is empty!! No node to delete\n");

 else if(start->rlink == NULL){
    printf("deleted\n %d\t%s\t%s\t%s\n",start->id,start->name,start->branch,start->area);
free(start);
start = NULL;
  }
  else{
ptr = start;
while(ptr->rlink != NULL){
  cur = ptr;
  ptr = ptr->rlink;
}
printf("deleted\n %d\t%s\t%s\t%s\n",ptr->id,ptr->name,ptr->branch,ptr->area);
free(ptr);
cur->rlink = NULL;
  }
}//end of deletedend

int main() {
   while(1){
   printf("\n----menu----\n");
   printf("1.create DLL 2.display 3.insert front 4.insert end 5.delete front 6.delete end 7exit\n");
   printf("Enter your choice\n");
   scanf("%d",&choice);
   switch(choice){
      case 1: printf("Enter the number of proressors\n");
      scanf("%d",&n);
      for(i=0; i<n; i++)
      insertbeg();
      break;
      case 2: traverse();
      break;
      case 3: insertbeg();
      break;
      case 4: insertend();
      break;
      case 5: deletebeg();
      break;
      case 6: deleteend();
      break;
      case 7: exit(0);
      break;
      default: printf("your enter the invalid choice\n");
   }//end of switch
   }
 return 0;
}
