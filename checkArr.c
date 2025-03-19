#include<stdio.h>
int main(){
    int i,j,n,flag=1;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the value of element %d \n",(i+1));
        scanf("%d",&arr[i]);
    }
    for(j=0;j<(n-1);j++){
        if(arr[j]>arr[j+1]){
            flag=0;
        }
    }
    if(flag==1){
        printf("The array is sorted");
    }else{
        printf("The array is not sorted");
    }
    return 0;
}
