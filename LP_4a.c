/*
Design, Develop and Implement a Program in C for the following Stack Applications Evaluation of 
Suffix expression with single digit operands and operators: +, -, *, /, %, ^ Solving Tower
of Hanoi problem with n disks
*/
#include<stdio.h>
#include<math.h> // -lm
#include<ctype.h>
int i,a,b,top=-1,value;
char stack[50],postfix[50],symbol;

void push(int value){
    stack[++top]=value;
    printf("pushed element is %d\n",stack[top]);
}//end of push


int pop(){
    return stack[top--];
}//end of pop

int main(){
    printf("Enter the postfix expression\n");
    scanf("%s",postfix);
    
    for(i=0; postfix[i]!='\0';i++){
        symbol=postfix[i];

        if(isdigit(symbol))
        push(symbol-48);
        else{
            b=pop();
            a=pop();
            switch(symbol){
                case '+':push(a+b);
                break;
                case '-':push(a-b);
                break;
                case '*':push(a*b);
                break;
                case '/':push(a/b);
                break;
                case '%':push(a%b);
                break;
                case '^':
                case '$':push(pow(a,b));
                break;
                default:printf("Invalid operator\n");
            }//end of switch
        }//end of else
    printf("Result of given expression in stack= %d\n",stack[top]);
    }//end of for
    
    return 0;
}



