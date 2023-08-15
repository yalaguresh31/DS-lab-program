 //tower
#include<stdio.h>
#include<math.h> // -lm
int n,r;
void tower(int n, char A, char B,char C){
if(n==1)
printf("move disc from %c to %c\n",A,C);

else{
tower(n-1,A,C,B);
printf("move disc from %c to %c\n",A,C);
tower(n-1,B,A,C);

}//end of else

}//end of tower

int main(){
    printf("Enter the number of discs\n");
    scanf("%d",&n);
    tower(n,'A','B','C');
    r = (pow(2,n)-1);
printf("number of steps is %d\n",r);
    return 0;
}//end of main

