//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    // Swap using third variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped values
    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
