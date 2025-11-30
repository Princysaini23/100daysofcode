//Q58: A program to find the maximum and minimum element in an array
#include<stdio.h>
int main()
{
    int i, j, n, max, min, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }
    max = arr[0];
    min = arr[0];
    for(i=0; i<n; i++)
    { if(max < arr[i])
      max = arr[i];
      if(min > arr[i])
      min = arr[i];
    }
    printf("The maximum and minimum values are %d and %d.", max, min);

    return 0;
}