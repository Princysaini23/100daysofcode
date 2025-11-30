//Q68: WAP to delete an element from an array.
#include<stdio.h>
int main()
{
    int i, n, arr[100], position;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }
    
    printf("Enter the index of the number to be deleted in the array: ");
    scanf("%d", &position);
    if(position >= 0 && position <= n)
    { for(i=position; i<n; i++)
    { arr[i] = arr[i+1]; }
    printf("The new array is: ");
    for(i=0; i<n-1; i++)
    { printf("%d ", arr[i]); }
    printf("\n");
    }
    else
    printf("Invalid position.");
    return 0;
}
