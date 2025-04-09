#include<stdio.h>
#include<math.h>
int main(){
    int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,trace=0,norm=0;
    for(i=0;i<3;i++){
        trace+=m[i][i];
    }
    printf("The trace of the matrix is %d",trace);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            norm+=pow(m[i][j],2);
        }
    }
    printf("The norm of the given matrix is %f",sqrt(norm));
    return 0;
}