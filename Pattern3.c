#include<stdio.h>
int main(){
    int i,j,k=1,l=2;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i%2==1){
                printf("%d ",k);
                k+=2;
            }else{
                printf("%d ",l);
                l+=2;
            }
        }
        printf("\n");
    }
    return 0;
}