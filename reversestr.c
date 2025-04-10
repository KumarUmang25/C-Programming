#include<stdio.h>
#include<string.h>
int main(){
    char arr[20]="I love you";
    int j=0,i;
    int len=strlen(arr);
    char revArr[len];
    for( i=len-1;i>=0;i--){
        revArr[j]=arr[i];
        j++;
    }
    revArr[j]='\0';
    printf("The string in reverse order will be %s ",revArr);
}