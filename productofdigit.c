#include<stdio.h>
int main(){

    long n,p,q;
    p=1;
    printf("Enter a Value of N:");
    scanf("%ld",&n);

    while(n !=0){

        q=n % 10;
        p=p * q;
        n=n / 10;
    }
    printf("Product of Digits is:%ld\n",p);











 return 0;
}
