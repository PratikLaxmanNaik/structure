#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter the number of rows for the upper half of the diamond
    printf("Enter the number of rows for the upper half of the diamond: ");
    scanf("%d", &n);

    // Print the upper half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the lower half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
