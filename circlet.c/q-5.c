#include<stdio.h>

int main(){

    int val=5;


    for(int i=1; i<=val; i++){
        for(int space=1; space<=10; space++){
            printf(" ");
        }
        for(int j=1; j<=val; j++){
            if(i==1 || i==val || j==1 || j==val || i==j || i+j==val+1){
                printf("* ");
            }else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
}