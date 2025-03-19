#include<stdio.h>
int main(){
    int i,j,n,temp;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the value of element %d \n",(i+1));
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
        for(j=0;j<(n-1);j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        } 
    }
    printf("The array after sorting \t");
    for(j=0;j<n;j++){
        printf("%d \t",arr[j]);
    }
    return 0;
}