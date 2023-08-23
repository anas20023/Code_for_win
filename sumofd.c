#include<stdio.h>

int main()
{

    int c,n,sum;
    sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);

    do
    {
        c=n % 10;
        sum +=c;
        n=n / 10;


    }
    while(n!=0);

    printf("Sum of Digits : %d\n",sum);



    return 0;
}
