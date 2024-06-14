#include<stdio.h>

int main(){

    int val=10;


    for(int i=1; i<=val; i++){
        for(int j=1; j<=val; j++){
            if(i==1 || j==2 || i==val || j==val || i==val/2){
                printf("* ");
            }else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
}