//Q57: A program to find the sum of array elements
#include<stdio.h>
int main()
{
    int i, n, sum, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    sum = 0;

    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }
    for(i=0; i<n; i++)
    { sum = sum + arr[i];}
    printf("%d", sum);
    
    return 0;
}

