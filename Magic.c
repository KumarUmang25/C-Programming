#include<stdio.h>
int main(){
    int m1[3][3]={{4,9,3},{3,5,7},{8,1,6}};
    int i,j,s=0,row=0,col=0,dia1=0,dia2=0;
    for(i=0;i<3;i++){  //Calculating sum of one row to set a margin
        s+=m1[0][i];
    }
    int flag=1;
    for(i=0;i<3;i++){
        row=0,col=0;
        for(j=0;j<3;j++){
            row+=m1[i][j];
            col+=m1[j][i];
        }
        if(row!=s||col!=s)
        flag=0;
        dia1+=m1[i][i];
        dia2+=m1[i][3-i-1];
    }
    if(dia1!=s||dia2!=s)
    flag=0;
    if(flag==1){
        printf("Magic Square");
    }else{
        printf("Not a magic square");
    }
}