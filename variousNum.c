#include<stdio.h>
int main(){
    int i,j,n;
    int pos=0,neg=0,odd=0,even=0,zero=0;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter the value of element %d \n",(i+1));
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        if(arr[j]>0){
            pos++;
        }
        else if(arr[j]<0){
            neg++;
        }
        else{
            zero++;
        }
        if(arr[j]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("The number of pos ,neg ,zero ,even and odd numbers in the array are %d,%d,%d,%d and %d",pos,neg,zero,even,odd);
    return 0;
}