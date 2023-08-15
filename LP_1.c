/*
Design, Develop and Implement a menu driven Program in C for the following Array Operations 
a. Creating an Array of N Integer Elements. 
b. Display of Array Elements with Suitable Headings. 
c. Exit.
*/
#include<stdio.h>
#include<stdlib.h>
int a[100],i,n,choice;
void create(){
    printf("enter the size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}

void display(){
    printf("Array elements:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}

void main(){
    while(1){
        printf("\nMENU\n1.Create\t2.Display\t3.Exit\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:create();
            break;
            case 2: display();
            break;
            case 3: exit(0);
            default:
            printf("invalid choice\n");
        }
    }
}

