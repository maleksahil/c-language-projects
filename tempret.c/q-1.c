#include<stdio.h>

int main(){
	
	
	char first_alphabate = 'a';
	char last_alphabate = 'z';
      
	  do{
		 first_alphabate+=3;
		printf("%c ",first_alphabate);
	}while(first_alphabate<=last_alphabate);
}