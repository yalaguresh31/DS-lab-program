/*
Design, Develop and Implement a menu driven Program in C for the following Array operations 
a. Inserting an Element (ELEM) at a given valid Position (POS) 
b. Deleting an Element at a given valid Position POS) 
c. Display of Array Elements 
d. Exit.
*/
#include<stdio.h>
#include<stdlib.h>
int a[100],i,pos,elem,ch,n,del;
void display(){
    printf("Array elements:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}

void insert(){
    printf("Enter position\n");
    scanf("%d",&pos);

    if(pos<0||pos>=n)
    printf("invalid\n");

    else{
        printf("Enter the element\n");
        scanf("%d",&elem);
        for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];

        a[pos]=elem;
        n=n+1;
    }
}
void delete(){
    printf("Enter position\n");
    scanf("%d",&pos);

    if(pos<0||pos>=n)
    printf("invalid\n");

    else{
       del=a[pos];
        for(i=pos;i<n-1;i++)
        a[i]=a[i+1];
        n=n-1;
        printf("Deleted element=%d\n",del);
    }
}

void main(){
    printf("enter the size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    while(1)
    {
        printf("\n~~~~manu~~~~\n1.insert  2.delete  3.display  4.Exit\n");
        printf("Enter the choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
            break;
            case 2: delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:
            printf("invalid choice\n");
        }
    }
}

