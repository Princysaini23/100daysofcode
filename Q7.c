//Write a program to swap two numbers without using a third variable.
#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    // Swap without third variable using arithmetic
    a = a + b;
    b = a - b;
    a = a - b;

    // Display swapped values
    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
