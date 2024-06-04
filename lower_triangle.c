// * 
// * *
// * * *
// * * * *
#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter the number of rows for the lower triangle
    printf("Enter the number of rows for the lower triangle: ");
    scanf("%d", &n);

    // Loop to print the lower triangle pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
