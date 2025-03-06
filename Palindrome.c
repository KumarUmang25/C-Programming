#include<stdio.h>
int main(){
    int n,temp,rem,rev=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==n){
        printf("The given number is a palindrome number");
    }
    else{
        printf("The give number is NOT a palindrome number");
    }
}