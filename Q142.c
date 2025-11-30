//Store details of 5 students in an array of structures and print all
#include <stdio.h>

// Define Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];

    // Read details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);  // Use %s for single-word names

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // Print all student details
    printf("--- All Students Details ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name     : %s\n", students[i].name);
        printf("Roll No  : %d\n", students[i].roll_no);
        printf("Marks    : %.2f\n\n", students[i].marks);
    }

    return 0;
}
