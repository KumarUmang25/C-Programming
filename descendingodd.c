#include<stdio.h>
int main(){
    int N,i;
    printf("Enter a number N \n");
    scanf("%d",&N);
    for(i=N;i>=1;i--){
        if(i%2==1){
            printf("\n %d",i);
        }
    }
    return 0;
}