#include <stdio.h>

int main()
{


    int i,j,n,count;
    printf("Enter a Number:");
    scanf("%d",&n);

    for(j=2; j<=n; j++)
    {
        count=0;

        for(i=2; i<=j/2; i++)
        {
            if(j % i==0)
            {
                count=1;
                break;
            }
        }

        if(count==0)
        {
            printf("%d\t",j);
        }

    }

    return 0;
}
