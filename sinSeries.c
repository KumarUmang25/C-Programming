#include<stdio.h>
#include<math.h>
int factorial(int n){
    int fact=1;
    for(int j=1;j<=n;j++){
        fact*=j;
    }
    return fact;
}

int main(){
    int n,x,i=0,c=1,facto;
    float s;
    printf("Enter the number of terms of the series to be printed \n");
    scanf("%d",&n);
    printf("Enter the value of variable x for the sin function\n");
    scanf("%d",&x);
    s=x;   
    for(i=2;i<=n;i++){
        facto=factorial(c+2);
        if(i%2==1){
            s+=(pow(x,(c+2)))/facto;
        }else{
            s+=((pow(x,(c+2)))/facto)*-1;
        }
        c+=2;
    }
    printf("The sum of the sin series will be %f",s);
    return 0;
}
