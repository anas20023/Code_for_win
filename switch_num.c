#include<stdio.h>

int main()
{


    int a,b;
    printf("Enter a Number:");
    scanf("%d",&a);
    printf("Enter another Number:");
    scanf("%d",&b);

    switch(a>b)
    {

    case 0:
        printf("%d is Maximum Number\n",b);
        break;
    case 1:
        printf("%d is Maximum Number\n",a);
        break;
    }







    return 0;
}
