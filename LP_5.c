#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node *link;
}*start1 = NULL,*start2 = NULL,*temp,*ptr;

int choice,i,n,key;
void insertbeg() {
 
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->info);
    temp->link = NULL;

    if(start1 == NULL)
    start1 = temp;

    else {
        temp->link = start1;
        start1 = temp;
    }//end of else

}//end of insertbeg


void traverse() {
    if(start1 == NULL)
    printf("SLL is empty\n");
    else {
        int count =0;
        ptr = start1;
        while(ptr != NULL) {
            printf("%d\t",ptr->info);
            ptr = ptr->link;
            count++;
        }//end of loop
        printf("\ntotal = %d\n",count);
    }//end  of else
}//end of traverse

void insertend() {
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->info);
    temp->link = NULL;

    if(start2 == NULL)
    start2 = temp;
    else {
        ptr = start2;
        while(ptr->link != NULL)
        ptr = ptr->link;
        //end of while
        ptr->link = temp;
    }//end of else
}//end of insertend

void concatenate() {
    ptr = start1;
    while(ptr->link != NULL)
    ptr = ptr->link;
    ptr->link = start2;
    printf("list1 joined with list2 successfully!! \n");
}

void search() {
    printf("Enter the seatch element\n");
    scanf("%d",&key);
    ptr = start1;
    while(ptr != NULL){
        if(key == ptr->info){
            printf("key %d is found\n",ptr->info);
            return;
        }
        ptr = ptr->link;
    }
    printf("key is not found\n");
}
int main() {

   while(1) {

    printf("\n~~~~menu~~~~\n");
    printf("1.create list1 2.create list2 3.display  4.concatenate 5.Search 6.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice) {

            case 1:printf("Enter the number of nodes\n");
               scanf("%d",&n);
               for(i=0; i<n; i++)
                    insertbeg();
       
            break;

            case 2: printf("Enter the number of nodes\n");
                    scanf("%d",&n);
                    for(i=0; i<n; i++)
                        insertend();

            break;

            case 3: traverse();

            break;

            case 4: concatenate();

            break;

            case 5: search();

            break;

            case 6: exit(0);

            default: printf("Invalid choice\n"); 

        }//end of switch
    }//end of loop
    return 0;
}//end of main

