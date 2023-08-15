#include<stdio.h>
#include<stdlib.h>
int n,i,j,a[10],temp;
void sorting();
void main(){
    printf("enter the size\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    sorting();
}//end of main

void sorting(){
    for(i=0; i<n; i++){
    for(j=0; j<n-1; j++){
    if(a[j] > a[j+1]){
        temp = a[j];
        a[j] =a[j+1];
        a[j+1] = temp;
          }
       }
    }
    printf("sorted array is:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}//end of sorting
