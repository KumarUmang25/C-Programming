#include<stdio.h>
int main(){
    int arr1[3][3]={{1,2,3},{2,2,2},{1,1,1}};
    int arr2[3][3]={{1,2,3},{2,2,2},{1,2,3}};
    int i,j,k,temp=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                temp+=arr1[i][k]*arr2[k][j];
            }
            printf("%d\t",temp);
        }
        printf("\n");
    }
    temp=0;
}