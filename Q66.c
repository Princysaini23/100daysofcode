//Q66: Write a program to insert an element in a sorted array at the appropriate position.
#include<stdio.h>
int main()
{
    int i, temp, n, num, found, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }
    printf("Enter a new integer to be inserted: ");
    scanf("%d", &temp);

    printf("The new array is ");
    for(i=0; i<n+1; i++)
    { if(temp > arr[i-1] && temp < arr[i])
    { arr[i+1] = arr[i];
      arr[i] = temp;}
      else 
    { arr[n] = temp;}
    printf("%d ", arr[i]);}
    printf("\n");

    return 0;   
}
