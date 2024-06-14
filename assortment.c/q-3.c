#include<stdio.h>

int main(){

    int size1;
    int size2;


    printf("Enter the array's row size: ");
    scanf("%d",&size1);

    printf("Enter the array's column size: ");
    scanf("%d",&size2);

    int arr[size1][size2];

     for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            printf("arr[%d][%d] = ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0; i<size1; i++ ){
        for(int j=0; j<size2; j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

}