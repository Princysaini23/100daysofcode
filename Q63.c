//Q63: A program to merge two arrays
#include<stdio.h>
int main()
{
    int i, j, n, m, arr1[100], arr2[100], merged_arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr1[i]); }

    printf("Enter the size of the array: ");
    scanf("%d", &m);
    for(j=0; j<m; j++)
    { printf("Enter the integer: ");
      scanf("%d", &arr2[j]); }
    
    for(i=0; i<n; i++)
    { merged_arr[i] = arr1[i]; }
    for(j=0; j<m; j++)
    { merged_arr[n+j] = arr2[j]; }
    for(i=0; i<n+m; i++)
    { printf(" %d", merged_arr[i]); }
    
    return 0;
}