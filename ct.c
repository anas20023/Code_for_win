#include<stdio.h>
int main(){

    int i=0,x=0;
    i=3;
    i++;
    --i;
    if(i % 3==0){
        x=x+i;
        i=i+1;
    }

    printf("i= %d\t",i);
     printf("x= %d\n\n",x);


 return 0;
}
