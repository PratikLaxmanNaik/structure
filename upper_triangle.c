// * * * *
//   * * *
//     * *
//       *

#include <stdio.h>

int main()
{
    int n;

    // Prompt the user to enter the number of rows for the upper triangle
    printf("Enter the number of rows for the upper triangle: ");
    scanf("%d", &n);

    // Loop to print the upper triangle pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
