// create the structure of n  Flowers ( id , name , color ) and display the  
//     information of the n flowers 

#include <stdio.h>

// Define the structure named Flower
struct Flower {
    int id;
    char name[50];
    char color[50];
};

int main() {
    int n;

    // Prompt the user to enter the number of flowers
    printf("Enter the number of flowers: ");
    scanf("%d", &n);

    // Declare an array of Flower structures
    struct Flower flowers[n];

    // Loop to get information for each flower
    for (int i = 0; i < n; i++) {
        printf("\nEnter information for flower %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &flowers[i].id);

        printf("Name: ");
        scanf(" %[^\n]", flowers[i].name); // %[^\n] to read string with spaces

        printf("Color: ");
        scanf(" %[^\n]", flowers[i].color); // %[^\n] to read string with spaces
    }

    // Display the information of all flowers
    printf("\nInformation of the flowers:\n");
    for (int i = 0; i < n; i++) {
        printf("\nFlower %d:\n", i + 1);
        printf("ID: %d\n", flowers[i].id);
        printf("Name: %s\n", flowers[i].name);
        printf("Color: %s\n", flowers[i].color);
    }

    return 0;
}
