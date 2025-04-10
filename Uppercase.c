#include<stdio.h>
int main(){
    char arr[10]="HEllO";
    int i;
    for(i=0;i<10;i++){
        if(arr[i]>=97&&arr[i]<122){
            arr[i]=arr[i]-32;
        }
    }
    printf("%s",arr);
}
