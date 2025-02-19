#include<stdio.h>
#include<math.h>
int main(){
    int choice,l,b,r,x,y,z,s;
    float area;
    printf("Enter your Choice");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("Enter the length and breadth of a rectangle");
            scanf("%d%d",&l,&b);
            area=l*b;
            printf("The area for the given choice %d is = %.2f",choice,area);
            break;
        case 2:printf("Enter the radius of the circle");
            scanf("%d",&r);
            area=3.14*r*r;
            printf("The area for the given choice %d is = %.2f",choice,area);
            break;
        case 3:printf("Enter the sides of a triangle");
            scanf("%d%d%d",&x,&y,&z);
            s=(x+y+z)/2;
            area=sqrt(s*(s-x)*(s-y)*(s-z));
            printf("The area for the given choice %d is = %.2f",choice,area);
            break;
        default:printf("Invalid Choice");
    }
    return 0; 
}