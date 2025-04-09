#include<stdio.h>
int main(){
    int i,j,n,c=0;
    printf("Enter the element to look for\n");
    scanf("%d",&n);
    int matrix[3][3]={{2,4,6},{8,10,12},{8,4,8}};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(matrix[i][j]==n){
                c++;
            }
        }
    }if(c>=1){
        printf("The element is present %d times",c);
    }else{
        printf("The element is not present");
    }
}