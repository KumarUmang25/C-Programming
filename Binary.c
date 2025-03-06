#include<stdio.h>
#include<math.h>
int main(){
    int n,rem,i=0,decimal=0,temp;
    printf("Enter the binary number \n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        rem=temp%10;
        decimal+=rem*pow(2,i);
        temp=temp/10;
        i++;
    }
    printf("The decimal value for the binary number %d is %d",n,decimal);
}