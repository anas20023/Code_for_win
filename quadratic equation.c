#include<stdio.h>
#include<math.h>

int main()
{

    float a,b,c,r1,r2,D,img;
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    printf("Enter value of c:");
    scanf("%f",&c);

    D=pow(b,2)-(4 * a * c);
    r1=(-b+sqrt(D))/(2 * a);
    r2=(-b-sqrt(D))/(2 * a);
    img=sqrt(-D)/(2 * a);


    if(D>0)
    {
        printf("\nTwo distinct and real roots exists:\n\n");
        printf("Root 1 is: %0.2f\n",r1);
        printf("Root 2 is: %0.2f\n",r2);

    }
    else if(D==0)
    {
        printf("\nTwo equal and real roots exists:\\nn");
        printf("Root 1 is: %0.2f\n",-b/(2 * a));
        printf("Root 2 is: %0.2f\n",-b/(2 * a));

    }
    else if(D<0)
    {
        printf("\nTwo distinct complex roots exists:\n\n");
        printf("Root 1 is: %0.2f + %0.2fi\n",-b/(2 * a),img);
        printf("Root 2 is: %0.2f -%0.2fi\n",-b/(2 * a),img);
    }




    return 0;
}
