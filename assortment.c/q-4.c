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

    int row;

    printf("enter row number: ");
    scanf("%d",&row);

    int sum=0;

    printf("Elements of row %d: ",row);

    for(int j=0; j<size1; j++){
        printf("%d ",arr[row][j]);
        sum+= arr[row][j];
    }
    printf("\n");
    printf("The sum of a row %d: %d \n",row,sum);

     int col;

    printf("enter collum number: ");
    scanf("%d",&col);

    int sum1=0;

    printf("Elements of col %d: ",col);

    for(int i=0; i<size2; i++){
        printf("%d ",arr[i][col]);
        sum1+= arr[i][col];
    }
    printf("\n");
    printf("The sum of a row %d: %d ",col,sum1);



}