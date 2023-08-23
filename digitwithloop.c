#include<Stdio.h>

int main()
{


    int i,n;
    printf("Enter a Number:");
    scanf("%d",&n);

    for(i=0;; i++)
    {

        if(n ==0)
        {
            break;
        }
        n=n/10;


    }
    printf("There are %d digit in the number\n",i);







    return 0;
}
