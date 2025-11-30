//Q56: A program to read and print elements of a one-dimensional array
#include<stdio.h>
int main()
{
    int i, n, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }
    for(i=0; i<n; i++)
    { printf("%d ", arr[i]);  }

    return 0;
}