#include<stdio.h>

int main(){


     long long r,n,m;
     r=0;
     printf("Enter a Number:");
     scanf("%lld",&n);

    do{

                m= n % 10;
                r=r * 10 +m;
                n=n / 10;
    } while(n!=0);

    printf("Inverse Number is: %lld\n",r);








 return 0;
}
