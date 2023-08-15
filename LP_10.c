/*
Design and develop a program in C that uses Hash Function H:K->L as
 H(K)=K mod m(reminder method) and implement hashing technique to map a given key K to the
  address space L. Resolve the collision (if any) using linear probing.
*/
#include<stdio.h>
#include<stdlib.h>
int a[50],max=5,i,choice,num,key,count;
void display(){
    for ( i = 0; i < max; i++) 
        printf("%d\t%d\n",i,a[i]);
}//End of display()


void insert(){
    if(count == max){
        printf("Hash table is full!\n");
        return;
    }

    
    printf("Enter the number\n");
    scanf("%d",&num);
    key=num%max;

    if (a[key]==-1){
        a[key]=num;
        count++;
    }
    else{
        printf("Collision detected!\n");
        for ( i = key+1; i < max; i++) {
            if (a[i]==-1) {
                a[i]=num;
                count++;
                return;
            }
        }
        for ( i = 0; i < key; i++) {
            if (a[i]==-1) {
                a[i]=num;
                count++;
                return;
            }
        }
    }
}//end of insert


int main() {
    for ( i = 0; i < max; i++)
        a[i] =-1;
    
    while(1) {
        printf("Press\t1.Insert\t2.Display\t3.EXIT\nEnter the choice:\n");
        scanf("%d",&choice);
        switch (choice) {
            case 1: insert(); 
                break;
            case 2: display(); 
                break;
            case 3:exit(0);
        }
    }
    return 0;
}//End of main

