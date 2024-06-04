#include <stdio.h>

// Define the structure named Student
struct Student {
    int id;
    char name[50];
    int age;
    int marks[6];
    float percentage;
};

int main() {
    int n;

    // Prompt the user to enter the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of Student structures
    struct Student students[n];

    // Loop to get information for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter information for student %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // %[^\n] to read string with spaces

        printf("Age: ");
        scanf("%d", &students[i].age);

        int totalMarks = 0;
        for (int j = 0; j < 6; j++) {
            printf("Marks for subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            totalMarks += students[i].marks[j];
        }

        students[i].percentage = (float)totalMarks / 6;
    }

    // Display the information of all students
    printf("\nInformation of the students:\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: ");
        for (int j = 0; j < 6; j++) {
            printf("%d ", students[i].marks[j]);
        }
        printf("\nPercentage: %.2f%%\n", students[i].percentage);
    }

    return 0;
}
