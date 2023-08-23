#include<stdio.h>

int sum(int n);

int main()
{

    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    printf("\n\nSum of 1 to %d = %d\n\n",n,sum(n));

    return 0;
}
int sum(int n)
{
    if(n==1)
    {

        return 1;
    }


    int Ssum=sum(n-1);
    int Msum=Ssum + n;

    return Msum;
}
