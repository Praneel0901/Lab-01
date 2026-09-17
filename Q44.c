//44
#include <stdio.h>
int main() {
    float unit,amt;
    printf("Enter the units consumed: ");
    scanf("%f",&unit);
    if(unit<=200){
        amt=unit*0.50;
    }else if(unit<=400){
        amt=100+(unit-200)*0.65;
    }else if(unit<=600){
        amt=230+(unit-400)*0.80;
    }else{
        amt=425+(unit-600*1.25);
    }
    printf("Total amount to be paid by the consumer is:%f",amt);
    return 0;
}