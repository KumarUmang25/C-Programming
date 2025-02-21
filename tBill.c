#include<stdio.h>
int main(){
    float TotalBill=0;
    int calls;
    printf("Enter the number of calls ");
    scanf("%d" , &calls);
    switch(calls){
        case 1...150:TotalBill=0;
                    printf("Total Bill = %d",TotalBill);
                    break;
        case 151...250:TotalBill=(calls-150)*0.9;
                       printf("Total Bill = %d",TotalBill);
                       break;
        case 251...400:TotalBill=100*0.9+(calls-250)*1.2;
                       printf("Total Bill = %d",TotalBill);
                       break;
        default:TotalBill=(100*0.9)+(150*1.2)+(calls-400)*1.5;
                printf("Total Bill = %d",TotalBill)
                break;
    }
    return 0;
}