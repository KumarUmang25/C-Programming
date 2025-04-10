#include<Stdio.h>
int main(){
    int i,c=0;
    char str[20]="Lets play a game";
    for(i=0;str[i]!='\0';i++){
        c++;
    }
    printf("The length of the given string is %d",c);
}