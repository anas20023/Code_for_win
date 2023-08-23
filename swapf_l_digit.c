#include<stdio.h>

int main()
{
    long long n,a,b,sum,temp,c;
    int p;
    sum=0;

    printf("Enter a Number:");
    scanf("%lld",&n);

    a=n;
    while(a>9)
    {

        a=a % 10; /// Last Digit Assign in a


    }

    b=n;
    while(b>9)
    {

        b= b / 10; /// First Digit Assign in b
    }
    sum=a+b;
    printf("First Digit is %lld\n",b);
    printf("Last Digit is: %lld\n",a);
    printf("Sum of First & Last Digit is: %lld\n\n\n",sum);
    printf("\t\t\t\Do you want to swap First & Last Digit?\n\n");
    printf("1.Yes\n2.No\n");
    scanf("%d",&p);
    switch(p)
    {


    case 1:
        temp=a;
        a=b;
        b=temp;
        printf("\tAfter Swap\n\nFirst Digit is :%lld\nLast Digit is: %lld\n",b,a);
        break;
    case 2:
        printf("Its okk !!\n");
        break;
    default:
        printf("Invalid Input\n");





    }


    return 0;
}

