//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int emp_id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp[3];  // Example: 3 employees
    int n = 3;

    // Read employee data from user
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Employee ID: ");
        scanf("%d", &emp[i].emp_id);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }

    // Write data to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fwrite(emp, sizeof(struct Employee), n, fp);
    fclose(fp);

    // Read data from binary file
    struct Employee emp_read[3];
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    fread(emp_read, sizeof(struct Employee), n, fp);
    fclose(fp);

    // Display employee data read from file
    printf("--- Employee Data from File ---\n");
    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Name     : %s\n", emp_read[i].name);
        printf("Emp ID   : %d\n", emp_read[i].emp_id);
        printf("Salary   : %.2f\n\n", emp_read[i].salary);
    }

    return 0;
}
