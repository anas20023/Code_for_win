#include<stdio.h>



int main()
{

    float hra,da,sal,gross;
    printf("Enter Basic Salary:");
    scanf("%f",&sal);


    if(sal<=10000)
    {
        hra= sal * 0.2;
        da= sal *0.8;

    }
    else if(sal<=20000)
    {
        hra= sal * 0.25;
        da= sal *0.90;

    }
    else
    {
        hra= sal * 0.30;
        da= sal *0.95;


    }
    gross=sal + hra + da;
    printf("Gross Slary is= %.2f\n",gross);








    return 0;
}
