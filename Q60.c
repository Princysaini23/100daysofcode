//Q60: A program to count positive, negative, and zero elements in an array
#include<stdio.h>
int main()
{
    int i, n, plus_count, minus_count, zero_count,arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }
    plus_count = 0;
    minus_count = 0;
    zero_count = 0;

    for(i=0; i<n; i++)
    { if(arr[i] > 0)
      plus_count++;
      else if(arr[i] < 0)
      minus_count++;
      else
      zero_count++; } 
    printf("The number of positive elements are %d.\n", plus_count);
    printf("The number of negative elements are %d.\n", minus_count);
    printf("The number of zero elements are %d.\n", zero_count);

return 0;
}