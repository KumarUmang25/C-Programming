#include<stdio.h>
#include<string.h>
int main(){
    char arr[20]="uwu";
    int j=0,i,flag=1;
    int len=strlen(arr);
    char revArr[len];
    for( i=len-1;i>=0;i--){
        revArr[j]=arr[i];
        j++;
    }
    revArr[j]='\0';
    for(i=0;i<len;i++){
        if(arr[i]!=revArr[i]){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("The given string is palindrome");
    }else{
        printf("The given string is not palindrome");
    }
}