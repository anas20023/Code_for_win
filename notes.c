#include<stdio.h>
int main()
{

    int amt,n1000,n500,n200,n100,n50,n20,n10,n5,n2,n1,temp;
    amt=n1000=n500=n200=n100=n50=n20=n10=n5=n2=n1=0;
    printf("Enter an Amount:");
    scanf("%d",&amt);
    temp=amt;

    if(amt>= 1000)
    {
        n1000= amt / 1000;
        amt=amt-(n1000 * 1000);
    }
    if(amt>=500)
    {
        n500=amt / 500;
        amt=amt-(n500 * 500);
    }
    if(amt>=200)
    {
        n200= amt / 200;
        amt=amt-(n200 * 200);

    }
    if(amt>=100)
    {

        n100=amt / 100;
        amt=amt-(n100 * 100);

    }
    if(amt>=50)
    {
        n50= amt / 50;
        amt=amt -(n50 * 50);
    }
    if(amt>=20)
    {

        n20=amt / 10;
        amt=amt- (n20 * 20);

    }
    if(amt>=10)
    {

        n10=amt / 10;
        amt=amt -(n10 * 10);
    }
    if(amt>=5)
    {
        n5=amt / 5;
        amt=amt-(n5 * 5);

    }
    if(amt >=2)
    {

        n2=amt / 2;
        amt=amt-(n2 * 2);
    }
    if(amt>=1)
    {
        n1=amt / 1;
        amt=amt-(n1 * 1);
    }



    printf("\t\t\t\tTotal Notes for %d Taka is:\n\n",temp);
    printf("Total Notes of 1000TK:\t%d\n",n1000);
    printf("Total Notes of 500 Tk:\t%d\n",n500);
    printf("Total Notes of 200 TK:\t%d\n",n200);
    printf("Total Notes of 100 TK:\t%d\n",n100);
    printf("Total Notes of 50  TK:\t%d\n",n50);
    printf("Total Notes of 20  TK:\t%d\n",n20);
    printf("Total Notes of 10  TK:\t%d\n",n10);
    printf("Total Notes of 5   TK:\t%d\n",n5);
    printf("Total Notes of 2   TK:\t%d\n",n2);
    printf("Total Notes of 1   TK:\t%d\n\n",n1);




    return 0 ;
}
