//Queue
#include<stdio.h>
#include<stdlib.h>
#define max 3

int choice,i,queue[50],rear=-1,front=0,element,n;
void display();
void insert();
void delete();

void main()
{
    while(1)
    {
        printf("\nMENU\n");
        printf("1.Insert  2.Delete  3.Display  4.Exit\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("Enter the number of nodes\n");
                    scanf("%d",&n);
                    for(i=0; i<n; i++)
                    insert();
                    break;
            case 2:delete();
                    break;
            case 3:display();
                    break;
            case 4:exit(0);
            default:printf("Invalid choice\n");
        }
    }
}

void insert()
{
    if(rear == max-1)
    printf("Queue Overflow\n");
    else
    {
        printf("Enter the elements :");
        scanf("%d",&queue[++rear]);
       // rear = rear + 1;
       // queue[++rear] = element;
    }
}

void display()
{
   if(rear == -1 && front==0)
   printf("The queue is empty\n");
   else
   {
    printf("The queue element are:\n");
    for(i=front; i<=rear; i++)
    printf("%d\t",queue[i]);
   }
}
void delete()
{
    if(front>rear){
    printf("Queue underflow\n");
    }
    else
    {
    //element = queue[front];
    //front = front + 1;
    printf("Deleted element is = %d\n",queue[front++]);
    }
}

