#include<stdio.h>

int main(){

    for(int col=41; col<=45; col++){
        
        for(int rows=41; rows<=col; rows++){
              printf("%d ",rows);
        }
        printf("\n");
    }
}