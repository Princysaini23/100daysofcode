//Q61: A program to search for an element in an array using linear search
#include<stdio.h>
int main()
{
    int i, j, n, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }
    
    printf("Enter the number you want to find: ");
    scanf("%d", &j);
    for(i=0; i<n; i++)
    { if(j == arr[i])
    { printf("Found at index %d", i);}
    }
    return 0;
}    