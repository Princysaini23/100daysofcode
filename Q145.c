//Return a structure containing top student's details from a function.
#include <stdio.h>

// Define Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find the top student
struct Student getTopStudent(struct Student students[], int n) {
    struct Student top = students[0];

    for (int i = 1; i < n; i++) {
        if (students[i].marks > top.marks) {
            top = students[i];
        }
    }

    return top;
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    // Read student details
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d details:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Get top student
    struct Student topStudent = getTopStudent(students, n);

    // Print top student
    printf("\n--- Top Student ---\n");
    printf("Name     : %s\n", topStudent.name);
    printf("Roll No  : %d\n", topStudent.roll_no);
    printf("Marks    : %.2f\n", topStudent.marks);

    return 0;
}
