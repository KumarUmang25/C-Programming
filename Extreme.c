#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    int min=0,max=0;
    for(i=0;i<n;i++){
        printf("Enter the value of element %d \n",(i+1));
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
        }
        if(arr[j]>max){
            max=arr[j];
        }
    }
    printf("The maximum value of array is %d \n",max);
    printf("The minimum value of array is %d",min);
    return 0;
}