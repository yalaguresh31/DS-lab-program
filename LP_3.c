/*
Design, Develop and Implement a menu driven Program in C for the following operations on STACK of
 Integers (Array Implementation of Stack with maximum size MAX) 
a. Push an Element on to Stack 
b. Pop an Element from Stack 
c. Demonstrate Overflow and Underflow situations on Stack 
d. Display the status of Stack 
e. Exit
*/

#include<stdio.h>
#include<stdlib.h>
#define max 3
int st[10],top=-1,i,ch,element;
void push(){
if(top==max-1)
printf("Stack Overflow\n"); 
else{
printf("Enter the element\n");
 scanf("%d",&element);
top = top +1;
st[top] = element;
}
}
void display(){
if(top==-1)
printf("Stack is empty\n");
else{
printf("Stack elements:\n");
for(i=top;i>=0;i--)
printf("%d\n",st[i]);  
}
}//end of display

void pop(){
if(top==-1)
printf("Stack Underflow\n");
else{
    element = st[top];
    top = top-1;
printf("Popped element=%d\n",element); 
}
}//end of pop

void main(){
    while(1){
        printf("\n~~~~MENU~~~~\n1.Push\t2.Pop\t3.Display\t4.EXIT\nEnter choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:
            printf("Invalid choice\n");
        }
    }
}//end of main

