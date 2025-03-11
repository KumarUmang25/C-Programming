#include<stdio.h>
int main(){
    float discount;
    int cp;
    printf("Enter the cost price");
    scanf("%d", &cp);
    switch(cp){
        case 0...500:discount=0;
                    printf("Discount = %0.2f" , discount);
                    break;
        case 501...800:discount=discount=(20.0/100.0)*cp;
                    printf("Discount = %0.2f" , discount);
                    break;
        default:discount=(25.0/100)*cp;
                printf("Discount = %0.2f" , discount);
                break;
    }
}
