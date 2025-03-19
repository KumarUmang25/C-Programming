#include<stdio.h>
int main(){
    int i,j,n,s=0;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the value of element %d \n",(i+1));
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        if(j%2==1){
            s+=arr[j];
        }
    }
    printf("The sum of odd index of the array is %d",s);
    return 0;
}