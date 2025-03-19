#include<stdio.h>
int main(){
    int i,j,n,a,b;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the value of element %d \n",(i+1));
        scanf("%d",&arr[i]);
    }
    printf("Enter the indices of subarray \n");
    scanf("%d %d",&a,&b);
    printf("The array in the given index range will be: \t");
    for(j=a;j<=b;j++){
        printf("%d \t",arr[j]);
    }
    return 0;
}