#include<stdio.h>

int main()
{


    int i,j;
    long long n;
    printf("Enter a Number:");
    scanf("%lld",&n);

    i=n;

    while(i>9)
    {

        i=i % 10;

    }
    j=n;

    while(j>=10)
    {


        j=j / 10;
    }

    printf("First Digit is: %d\n",j);
    printf("Last Digit is: %d",i);

    return 0;

}
