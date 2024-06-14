#include<stdio.h>

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	
	int first_digit=number;
	
	while(first_digit>=10){
		first_digit/=10; 
	    
	}
	
	int last_digit = number%10;
	
	int sum = first_digit+last_digit;
	
	printf("%d",sum);
	
	return 0;
	
} 