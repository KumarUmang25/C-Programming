#include<stdio.h>
int main(){
    int i,l,nt;
    int t1=0,t2=1;
    nt=t1+t2;
    printf("Enter the limit \n");
    scanf("%d",&l);
    printf("Fibonacci Series \n %d,%d",t1,t2);
    nt=t1+t2;
    for(i=3;i<=l;i++){
        printf(",%d",nt);
        t1=t2;
        t2=nt;
        nt=t1+t2;
    }
    return 0;
}