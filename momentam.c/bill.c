#include<stdio.h>

int main(){

    int unit;
    float amount,total_amount,sur_charge;

    printf("enter the units: ");
    scanf("%d",&unit);

    if(unit<=50){
        amount = unit*0.50;
    }else if(unit <= 150){
        amount = 25 + ((unit-50)*0.75);
    }else if(unit<=250){
        amount = 100 + ((unit-150)*1.2);
    }else{
        amount=220+((unit-250)*1.5);
    }

    sur_charge = amount*0.20;
    total_amount=amount+sur_charge;

    printf("electricity Bill = Rs.%2f",total_amount);
}