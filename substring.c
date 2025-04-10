#include<Stdio.h>
int main(){
    char str[20]="Lets have fun";
    int i,start,end,j=0;
    char substr[20];
    printf("Enter the starting and ending index of the string \n");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++){
        substr[j]=str[i];
        j++;
    }
    substr[j]='\0';
    printf("The substring of the given string is:%s",substr);
}