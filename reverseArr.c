#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    int revArr[n];
    int a=(n-1);
    for(i=0;i<n;i++){
        printf("Enter the value of element %d \n",(i+1));
        scanf("%d",&arr[i]);
    }   
    for(j=0;j<n;j++){
        revArr[j]=arr[a];
        a--;
    }
    printf("The array elements before reversing: \t");
    for(i=0;i<n;i++){
       printf("%d \t",arr[i]);
    }  
    printf("The array elements after reversing: \t");
    for(j=0;j<n;j++){
       printf("%d \t",revArr[j]);
    }  
    return 0;
}