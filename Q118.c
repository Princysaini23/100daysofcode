//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n-1]; // Array size is n-1 because one number is missing
    printf("Enter %d elements of the array (0 to %d, except one missing number): ", n-1, n);
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }

    // Sum method: sum of 0..n minus sum of array elements gives missing number
    int total_sum = n * (n + 1) / 2;
    int array_sum = 0;
    for (int i = 0; i < n-1; i++) {
        array_sum += arr[i];
    }

    int missing_number = total_sum - array_sum;
    printf("The missing number is: %d\n", missing_number);

    return 0;
}
