#include<stdio.h>
int main(){
    int m1[3][3]={{2,3,6},{3,4,5},{6,5,9}};
    int tra[3][3];
    int i,j,flag=1;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            tra[j][i]=m1[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(tra[i][j]!=m1[i][j])
                flag=0;
        }
    }
    if(flag==1){
        printf("SYMMETRIC");
    }else{
        printf("NOT SYMMETRIC");
    }
}