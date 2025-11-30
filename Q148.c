//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

// Define Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for first student
    printf("Enter details for first student:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll No: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    // Input for second student
    printf("\nEnter details for second student:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll No: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Compare the two structures
    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks) {
        printf("\nThe two students are identical.\n");
    } else {
        printf("\nThe two students are NOT identical.\n");
    }

    return 0;
}
