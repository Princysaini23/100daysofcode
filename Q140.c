//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

// Define enum for Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct Person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    // Take input from user
    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter age: ");
    scanf("%d", &p.age);

    printf("Select gender (0-MALE, 1-FEMALE, 2-OTHER): ");
    int g;
    scanf("%d", &g);
    p.gender = g; // assign enum value

    // Display information
    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: ");

    switch (p.gender) {
        case MALE:
            printf("MALE\n");
            break;
        case FEMALE:
            printf("FEMALE\n");
            break;
        case OTHER:
            printf("OTHER\n");
            break;
        default:
            printf("Invalid\n");
    }

    return 0;
}
