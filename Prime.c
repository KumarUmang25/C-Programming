#include<stdio.h>
int main(){
    int i,n,flag=1;
    printf("Enter a number of your choice \n");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("\n The given number , %d is prime",n);
    }else{
        printf("\n The given number , %d is not prime",n);
    }
}