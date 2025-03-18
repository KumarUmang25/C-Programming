#include<stdio.h>
int main(){
    int i,j,n,k=1;
    printf("Enter the number of rows \n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}