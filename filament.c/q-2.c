#include <stdio.h>

int main() {
    char str[100];
    int frequency[128] = {0}; // Assuming standard ASCII characters

    // Input string from user
    printf("Enter any string: ");
    scanf("%s", str);

    // Calculate frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        frequency[str[i]]++;
    }

    // Output the frequency of each character
    printf("Frequency of each letter:\n");
    for (int i = 0; i < 128; i++) {
        if (frequency[i] != 0) {
            printf("%c => %d\n", i, frequency[i]);
        }
    }

    return 0;
}
