//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main() {
    float radius, area, circumference;
    const float PI = 3.14159;  // Value of pi

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
