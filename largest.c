#include<stdio.h>
#include<stdlib.h>
int n,i,a[10];
void largest();
void main(){
    printf("enter the size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    largest();
}//end of main

void largest(){
    int large = 0;
    for(i=0; i<n; i++){
    if(a[i] >= large)
    large = a[i];
    }//end of loop
    printf("largest element = %d\n",large);
}//end of largest
