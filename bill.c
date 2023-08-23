#include<stdio.h>

int main(){

    float unit,bill,total,subcharge;
    printf("Enter Total Consumed Unit: ");
    scanf("%f",&unit);

    if(unit<=0 && unit>=50){
        bill=unit * 0.5;
    }
    else if(unit> 50 && unit <=150){
        bill= unit * 0.75;
    }
    else if(unit>150 && unit <=250){
        bill=unit * 1.20;
    }
    else if(unit>250){
        bill=unit * 1.5;
    }
    subcharge=bill * 0.20;
    total=bill + subcharge;
     printf("\nMain Bill \t\t\t= %f TK\n",bill);
    printf("SubCharge \t\t\t= %f TK\n",subcharge);
    printf("Total Electricity Bill is\t= %f TK\n",total);










    return 0;
}
