#include<stdio.h>
#include<stdlib.h>
#define max 4
int stk[max],top=-1,i,ch,elem;
void push()
{
    if(top==(max-1))
    printf("stack overflow");
    else 
    {
        printf("enter the elements");
        scanf("%d",&elem);
        top++;
        stk[top]=elem;
    }
}

void pop()
{
    if(top==-1)
    printf("stack underflow\n");
    else
    {
        elem=stk[top];
        top--;
        printf("popped elements=%d\n",elem);
    }
}

void display()
    {
if(top==-1)
printf("stack is empty\n");
else{
    printf("stack elements\n");
    for(i=top;i>=0;i--){
    printf("%d\n",stk[i]);
}
    }
    }

void main()
{
    while(1){
        printf("\n MENU 1.push\t 2.pop\t 3.display\t 4.exit\n Enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : push();
            break;
            case 2 :pop();
            break;
            case 3 : display();
            break;
            case 4 : exit(0);
            default:printf("invalid choice");        
        }
    }
}
