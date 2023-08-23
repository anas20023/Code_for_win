#include<stdio.h>

int main(){

    float a,b,c;
    printf("Enter The value of a:");
    scanf("%f",&a);
    printf("Enter The value of b:");
    scanf("%f",&b);
    printf("Enter The value of c:");
    scanf("%f",&c);

    if((a+b>c)&&(b+c>a)&&(c+a>b)){
        printf("\nValid Tri_Angle\n");
    } else{
        printf("\nNot Valid Tri-Angle\n");
    }



 return 0;
}
