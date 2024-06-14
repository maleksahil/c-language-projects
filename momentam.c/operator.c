#include<stdio.h>

int main()
{

    int num;

    printf("enter any number: ");
    scanf("%d",&num);

    (num%2==0) ? printf("this number is even")
               : printf("This number is Odd");
}