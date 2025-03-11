#include<stdio.h>
int main(){
    int units;
    float TotalBill;
    printf("Enter the number of units")
    scanf("%d" , &units)
    switch(units){
        case 1...100:TotalBill=0;
                    printf("Total Bill= %0.2f",TotalBill);
                    break;
        case 101...200:TotalBill=(units-100)*1.5;
                      printf("Total Bill= %0.2f",TotalBill);
                      break;
        case 201...400:TotalBill=(100*1.5)+(units-200)*2.5;
                      printf("Total Bill= %0.2f",TotalBill);
                      break;
        default:TotalBill=(100*1.5)+(200**2.5)+(units-400)*3.5;
                printf("Total Bill= %0.2f",TotalBill);
    }
    return 0;
}
