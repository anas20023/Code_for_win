#include<stdio.h>

int main()
{

    long long i,n,count;
    printf("Enter a Number:");
    scanf("%lld",&n);
    count=0;

    for(i=2; i<=n/2; i++)
    {
        if(n % i==0)
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        printf("Prime Number\n");
    }
    else
    {
        printf("Not Prime Number\n");
    }


    return 0;
}
