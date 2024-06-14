#include <stdio.h>

// Function to calculate the cube of a number
int cube(int *num) {
    return (*num) * (*num) * (*num);
}

int main() {
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
            
        }
    }

    printf("\nCubes of all elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", cube(&arr[i][j]));
        }
        // printf("\n");
    }

    return 0;
}
