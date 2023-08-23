#include<stdio.h>

int main()
{



    int phy,chem,bio,math,com;
    float percnt;
    printf("Enter Physics Marks:");
    scanf("%d",&phy);
    printf("Enter Chemistry Marks:");
    scanf("%d",&chem);
    printf("Enter Biology Marks:");
    scanf("%d",&bio);
    printf("Enter Mathmatics Marks:");
    scanf("%d",&math);
    printf("Enter Computer Marks:");
    scanf("%d",&com);
    percnt=(phy+chem+bio+math+com)/5;

    if(percnt>=0 && percnt<=100)
    {
        printf("\nYour got %f % Marks Overall\n\n",percnt);

        if(percnt>=90 && percnt<=100)
        {
            printf("You Got A");
        }
        else if(percnt>=80 && percnt<90)
        {
            printf("You Got B");
        }
        else if(percnt>=70 && percnt<80)
        {
            printf("You Got C");
        }
        else if(percnt>=60 && percnt<70)
        {
            printf("You Got D");
        }
        else if(percnt>=40 && percnt<40)
        {
            printf("You Got E");
        }
        else if(percnt<40 && percnt>=0)
        {
            printf("You Got F");
        }
    }

    else
    {
        printf("\nInvalid Number\n");
    }












    return 0;
}
