#include<stdio.h>

int main(){

    int col;
    int raw;
    int sum=11;

    for(col=11; col<=15; col++){
        for(raw=11; raw<=col; raw++){
            printf("%d ",sum);
            sum++;
        }
        printf("\n");
    }
}