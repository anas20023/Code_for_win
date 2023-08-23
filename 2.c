#include<stdio.h>

int main()
{

    int n,sum=0;
    printf("Enter a Value of N:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {

        sum +=i;


    }

    printf("Sum of all natural numbers up to %d is = %d\n",n,sum);

    return 0;
}
