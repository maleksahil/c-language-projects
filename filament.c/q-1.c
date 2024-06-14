#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    int isPalindrome = 1; 

   
    printf("Enter any string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("Given string is a Palindrome.\n");
    } else {
        printf("Given string is not a Palindrome.\n");
    }

    return 0;
}
