#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the numbers upto you want the table for \n");
    scanf("%d",&n);
    printf("Enter the number of terms for each table \n");
    scanf("%d",&k);
    for(i=1;i<=n;i++){
        printf("****Multiplication Table of %d**** \n",i);
        for(j=1;j<=k;j++){
            printf("%d * %d = %d\n",i,j,(i*j));
        }
        printf("\n");
    }
}