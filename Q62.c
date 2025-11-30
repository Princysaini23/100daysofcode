//Q62: A program to reverse an array without taking extra space.
#include<stdio.h>
int main()
{
    int i, j, n, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }
    printf("The reversed array is ");
    for(i=n-1; i>=0; i--)
    { printf(" %d", arr[i]); }

    return 0;
}    

