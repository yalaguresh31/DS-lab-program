#include<stdio.h>
#include<stdlib.h>
#define max 4
int i,ch,circular[50],rear=-1,front=0,element;
void insert(){
 if((rear == max-1 && front == 0)|| (rear == front-1 && front > 0))  
 printf("Circulur queue owerflow\n");
 else{
    printf("Enter the element\n");
    scanf("%d",&element);
    if(rear == max-1 && front>0)
    rear = 0;
    else
    rear++;
     
    circular[rear] = element;
  }
  
}//end of insert

void display(){
 if(front == 0 && rear == -1)
 printf("Circular queue emply\n");
 else if(front > rear){
    for(i=front; i<=max-1; i++)
    printf("%d\t",circular[i]);
    for(i=0; i<=rear; i++)
    printf("%d\t",circular[i]);
 }
    else{
        for(i=front; i<=rear; i++)//rear == max-1
        printf("%d\t",circular[i]);
    }
 
}//end of display

void delete(){
  if(front == 0 && rear == -1)
  printf("Circular queue underflow\n");
  else{
    element = circular[front];
    if(front == rear){
        front = 0;
        rear = -1;
    }
    else if(front == max-1)
    front = 0;
    else 
    front++;
    printf("deleted element = %d\n",element);
  } 
}//end of delete

int main(){
while(1){
printf("\n~~~MENU~~~\n");
printf("1.insert 2.delete 3.display 4.exit\n");
printf("enter the choice\n");
scanf("%d",&ch);
        switch(ch){
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:
            printf("invalid choice\n");
        }
    }
    return 0;
}//end of main
