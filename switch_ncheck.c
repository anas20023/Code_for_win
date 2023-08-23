#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    switch(n>0)
    {

    case 1:
        printf("%d is Positive Number\n",n);
        break;
    case 0:
        switch(n==0)
        {
        case 1:
            printf("%d is ZERO\n",n);
            break;
        case 0:
            printf("%d is Negative Number\n",n);
            break;
        }


    }



    return 0;
}
