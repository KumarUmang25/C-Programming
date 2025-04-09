#include<stdio.h>
int main(){
    int i,j;
    int list[5][3]={{4,5,6},{8,10,12},{6,10,14},{1,2,3},{7,6,6}};
    int s=0,sum=0;
    
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf(" \t %d",list[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            s+=list[i][j];
        }
        printf("The average is %d\n",s/3);
        s=0;
    }
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            sum+=list[j][i];
        }
        printf("The marks is %d \n",sum);
        sum=0;
    }
}