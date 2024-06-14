#include<stdio.h>
#include<conio.h>
main(){
float celsius, fahrenheit;

printf("Enter temperature in celsius: ");
scanf("%f",&celsius);
fahrenheit = (celsius*9/5)+32;
printf("%.2f degrees celsius is equal to %.2f degrees farenheit.\n", celsius, fahrenheit);
getch();



}