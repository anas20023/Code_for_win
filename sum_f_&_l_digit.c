#include<stdio.h>

int main()
{
    long long n,a,b,sum;
    sum=0;

    printf("Enter a Number:");
    scanf("%lld",&n);

    a=n;
    while(a>9)
    {

        a=a % 10;


    }

    b=n;
    while(b>9)
    {


        b= b / 10;
    }
    sum=a+b;
    printf("First Digit is %lld\n",b);
    printf("Last Digit is: %lld\n",a);
    printf("Sum of First & Last Digit is: %lld\n\n",sum);


    }





    return 0;
}
