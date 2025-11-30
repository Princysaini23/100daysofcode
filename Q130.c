//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    FILE *fp;
    int n, roll;
    char name[50];
    float marks;

    // ------- Writing to file -------
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        // Write each student record into file
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // ------- Reading from file -------
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    // Read until EOF
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF) {
        printf("Name: %-10s  Roll: %d  Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
