#include <stdio.h>

// Function prototypes
int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int modulus(int a, int b);

int main() {
    int choice, num1, num2;
    int exit_key;

    do {
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch(choice) {
            case 1:
                printf("Addition of %d and %d is %d\n\n", num1, num2, addition(num1, num2));
                break;
            case 2:
                printf("Subtraction of %d and %d is %d\n\n", num1, num2, subtraction(num1, num2));
                break;
            case 3:
                printf("Multiplication of %d and %d is %d\n\n", num1, num2, multiplication(num1, num2));
                break;
            case 4:
                if (num2>num1) {
                    printf("Error: first number should be greater than second number!\n\n");
                } else {
                    printf("Division of %d and %d is %d\n\n", num1, num2, division(num1, num2));
                }
                break;
            case 5:
                printf("Modulus of %d and %d is %d\n\n", num1, num2, modulus(num1, num2));
                break;
            default:
                printf("Invalid choice!\n\n");
        }

        printf("Press any key to continue or '0' to exit: ");
        scanf(" %d", &exit_key); 

    } while (exit_key != 0);

    return 0;
}

// Function definitions
int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a - b;
}

int multiplication(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}
