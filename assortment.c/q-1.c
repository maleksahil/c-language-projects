#include<stdio.h>

int main(){

    int size;

    printf("enter size: ");
    scanf("%d",&size);

    int arr[size];

    for(int i=0; i<size; i++){
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }

    for(int j=0; j<size; j++){
        if(arr[j]<0){
            printf("%d ",arr[j]);
        }
    }
}