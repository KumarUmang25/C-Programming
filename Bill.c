#include<stdio.h>
int main(){
    int calls;
    float TotalBill;
    printf("Enter the number of calls to calculate the bill");
    scanf("%d" , &calls);
    switch(calls){
        case 0...100:TotalBill=200;
                    printf("Bill is = %d",TotalBill);
                    break;
        case 101...150:TotalBill=200+(calls-100)*0.6;
                     printf("Bill is = %d",TotalBill);
                    break;
        case 151...200:TotalBill=200+(50*0.6)+(calls-150)*0.5;
                    printf("Bill is = %d",TotalBill);
                    break;
        default:TotalBill=200+(50*0.6)+(50*0.5)+(calls-200)*0.4;
                    printf("Bill is = %d",TotalBill);
    }
    return 0;
}