#include<stdio.h>
#include<conio.h>
main()
{
float bs,hra,da,ta,gs;
clrscr();
printf("Enter Base salary: ");
scanf("%f",&bs);
printf("Enter HRA percentage: ");
scanf("%f",&hra);
printf("Enter da percentage: ");
scanf("%f",&da);
printf("Enter ta percentage: ");
scanf("%f",&ta);
hra = bs*hra/100;
da = bs*da/100;
ta = bs*ta/100;
gs = bs+hra+da+ta;
printf("Gross salary: Rs. %.2f\n",gs);
getch();
}