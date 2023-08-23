#include<stdio.h>

int main(){

    long m,r,n,temp;
    r=0;
    printf("Enter a Number:");
    scanf("%ld",&n);
    temp=n;

    do{
       m=n % 10;
       r=r * 10 + m;
       n=n / 10;
    } while(n!=0);
    printf("Inverse Number of %ld is %ld\n",temp,r);

    if(r==temp){
        printf("Palindrome Number\n\n");

    } else{


        printf("Not Palindrome Number\n\n");
    }








 return 0;
}
