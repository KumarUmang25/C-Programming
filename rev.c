#include<stdio.h>
int main(){
    int n,temp,rev=0,rem;
    printf("Enter the number of your choice \n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    printf("The reverse of the number %d is %d",n,rev);
}