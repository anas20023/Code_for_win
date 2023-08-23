#include<stdio.h>

int main(){

    float a,b,c,sum;
    printf("Enter the Value of Angel A:");
    scanf("%f",&a);
    printf("Enter the Value of Angel B:");
    scanf("%f",&b);
    printf("Enter the Value of Angel C:");
    scanf("%f",&c);
    sum=a+b+c;

    if(sum==180){
        printf("The triangle is valid\n");
    } else{
            printf("The triangle is Not valid\n");

            }


return 0;
}
