#include<stdio.h>

int main(){
	
	int a,count=0;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	while(a!=0){
		count++;
		a/=10;
	}
	printf("there are %d digits",count);
}