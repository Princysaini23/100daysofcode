//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int found = 0;
    // Use array elements as index if all numbers are positive and <= n-1
    // Otherwise, we can use a small hash approach with extra array
    int freq[n];  // frequency array
    for(int i = 0; i < n; i++)
        freq[i] = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= n) {
            printf("Array element out of range for this method.\n");
            return 0;
        }
        freq[arr[i]]++;
        if(freq[arr[i]] > 1) {
            printf("The repeated element is: %d\n", arr[i]);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("No repeated element found.\n");

    return 0;
}

