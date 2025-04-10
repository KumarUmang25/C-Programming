#include<stdio.h>
#include<math.h>
int main(){
    int t,i,j,x;
    printf("Enter the number of terms");
    scanf("%d"&t);
    printf("Enter the value of x");
    scanf("%d",&x);
    for(i=1;i<=t;i++){
        s=s*pow(-1,(i+1))+pow(x,(i+1));
    }
}