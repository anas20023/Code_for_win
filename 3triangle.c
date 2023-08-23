#include<stdio.h>

int main(){

    float a,b,c;
    printf("Enter Side a :");
    scanf("%f",&a);
    printf("Enter Side b :");
    scanf("%f",&b);
    printf("Enter Side c :");
    scanf("%f",&c);



     if(a==b && b==c){
        printf("Triangle is equilateral triangle\n");
     }
     else if((a==b)|| (b==c)|| (c==a)){

        //printf("Triangle is scalene triangle\n");
        printf("Triangle is isosceles triangle\n");
     }
     else{
        //printf("Triangle is isosceles triangle\n");
        printf("Triangle is scalene triangle\n");
     }

return 0;
}
