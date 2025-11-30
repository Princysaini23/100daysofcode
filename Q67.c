//Q67: WAP to insert an element in an array at a given position.
#include<stdio.h>
int main()
{
    int i, n, num, arr[100], position;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }
    
    printf("Enter the position and the new number to be added in the array: ");
    scanf("%d %d", &position ,&num);
    
    for(i=n; i>=position; i--)
    { arr[i] = arr[i-1]; }
      arr[position-1] = num;
      printf("The new array is: ");
      for(i=0; i<n+1; i++)
      { printf("%d ", arr[i]); }
      printf("\n");

    return 0;
}