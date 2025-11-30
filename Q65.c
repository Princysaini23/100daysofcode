//Q65: Search in a sorted array using binary search.
#include<stdio.h>
int main()
{
    int i, upper, lower, middle, n, num, found, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    { printf("Enter the integer: ");
      scanf("%d", &arr[i]); }

    printf("The number you want to search: ");
    scanf("%d", &num);
    upper = 0;
    lower = n-1;
    found = 0;
    
    while(upper <= lower)
    { middle = (upper + lower) / 2;
    if(arr[middle] == num)
    { printf("Found the number at index %d\n", middle);
      found = 1;
      break; }
    else if(arr[middle] < num)
    { upper = middle + 1;}
    else
    { lower = middle - 1; } 
    }
    if(!found)
    { printf("Number not found.\n");}
   return 0;
}