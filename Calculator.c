#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter the operation you want to perform \n");
    scanf("%c" , &op);
    printf("Enter the operands on which operation will be performed");
    scanf("%d%d" , &a,&b);
    switch(op){
        case '+':printf("The sum will be = %d",(a+b));
                break;
        case '-':printf("The difference will be = %d",(a-b));
            break;
        case '*':printf("The product will be = %d",(a*b));
               break;
        case '/':printf("The quotient will be = %d",(a/b));
               break;
        default:printf("The required operation can't be performed");
    }
    return 0;
}
