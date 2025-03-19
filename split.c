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
    int split=n/2;
    printf("The first half of the array is :\t");
    for(j=0;j<split;j++){
        printf("%d \t",arr[j]);
    }
    printf("The second half of the array is :\t");
    for(j=(split);j<n;j++){
        printf("%d \t",arr[j]);
    }
    return 0;
}