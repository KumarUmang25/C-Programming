#include<stdio.h>
int main(){
    char sen[50]="I love you so much.";
    int i,c=0;
    for(i=0;sen[i]!='\0';i++){
        if(sen[i]==' '||sen[i]=='.'){
            c++;
        }
    }
    printf("The number of words in the given sentence is %d ",c);
}