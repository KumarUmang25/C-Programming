#include<stdio.h>
#include<math.h>
int main(){
    int n,rem,temp,sc=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        sc=sc+pow(rem,3);
        temp=temp/10;
    }
    if(sc==n){
        printf("The given number is an Armstrong Number");
    }
    else{
        printf("The given number is NOT an Armstrong Number");
    }
}