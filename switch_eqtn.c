#include<stdio.h>
#include<math.h>



float desctiminet(float a,float b,float c);

int main()
{



    printf("\t\t\t\t\tQuadratic equation Solver\n\n\n");

    float a,b,c,d,r1,r2,r3,r4;
    printf("Formate the Equation like this: \n\nax^2 + bx + c = 0\n\n");

    printf("Enter a:");
    scanf("%f",&a);

    printf("Enter b:");
    scanf("%f",&b);

    printf("Enter c:");
    scanf("%f",&c);

    d=desctiminet(a,b,c);

    r1=(-b+sqrt(d)) /(2 * a);
    r2=(-b-sqrt(d)) /(2 * a);

    r3=-b/(2*a);
    r4=sqrt(-d)/(2 * a);

    switch(d>0)
    {

    case 1:
        printf("Root 1 is = %.2f\n",r1);
        printf("Root 2 is = %.2f\n",r2);
        break;
    case 0:
        switch(d < 0)
        {

        case 1:
            printf("Root 1 is =%.2f + %.2f i\n",r3,r4);
            printf("Root 2 is =%.2f - %.2f i\n",r3,r4);
            break;
        case 0:

            printf("Root 1 is = %.2f",r1);
            printf("Root 2 is = %.2f",r2);


        }
    }







    return 0;
}

float desctiminet(float a,float b,float c)
{

    return (pow(b,2)-4 * a *c);
}




