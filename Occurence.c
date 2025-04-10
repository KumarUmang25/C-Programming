#include<stdio.h>
int main(){
    int c=-1,i;
    char ch;
    char arr[20]="KumarUmang";
    printf("Enter the character whose occurence is to be determined");
    scanf("%c",&ch);
    for( i=0;arr[i]!='\0';i++){
        if(arr[i]==ch){
            c=i;
        }
    }
    printf("The last index of the given character is %d",c);
}