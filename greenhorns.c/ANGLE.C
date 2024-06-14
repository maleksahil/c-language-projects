#include<stdio.h>
#include<conio.h>
main()
{
float fa,sa,ta;
clrscr();
printf("Enter the first anglr: ");
scanf("%f",&fa);
printf("Enter the second anglr: ");
scanf("%f",&sa);
ta = 180-fa-sa;
printf("Third angle: %.2f",ta);
getch();

}