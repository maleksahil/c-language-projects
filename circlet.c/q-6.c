#include<stdio.h>

int main(){

    int val=20;


    for(int i=1; i<=val; i++){
        for(int j=1; j<=val; j++){
            if(i==1 || j==1 || i==val/2 || j==val){
                printf("* ");
            }else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
}