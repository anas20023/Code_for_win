#include<stdio.h>

int main()
{


    int n;

    printf("1.January\n");
    printf("2.February\n");
    printf("3.March\n");
    printf("4.April\n");
    printf("5.May\n");
    printf("6.June\n");
    printf("7.July\n");
    printf("8.August\n");
    printf("9.September\n");
    printf("10.October\n");
    printf("11.November\n");
    printf("12.December\n");
    printf("\nChoose a Month:");
    scanf("%d",&n);


    switch(n)
    {

    case 1:
        printf("31 Days in January\n");
        break;
    case 2:
        printf("28 Days in February\n");
        break;
    case 3:
        printf("31 Days in March\n");
        break;
    case 4:
        printf("30 Days in April\n");
        break;
    case 5:
        printf("31 Days in May\n");
        break;
    case 6:
        printf("30 Days in June\n");
        break;
    case 7:
        printf("31 Days in July\n");
        break;
    case 8:
        printf("31 Days in August\n");
        break;
    case 9:
        printf("30 Days in September\n");
        break;
    case 10:
        printf("31 Days in October\n");
        break;
    case 11:
        printf("30 Days in November\n");
        break;
    case 12:
        printf("31 Days in December\n");
        break;
    default:
        printf("Invalid Input\n");


    }









    return 0;
}
