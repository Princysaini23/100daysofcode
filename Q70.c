//Q70: WAP to rotate an array to the right by k positions.
#include <stdio.h>
int main() 
{
  int n, k, arr[100], arr1[100];

  printf("Enter the size of the array: ");
  scanf("%d", &n);    
  for(int i = 0; i < n; i++) 
  { printf("Enter elements of the array: "); 
    scanf("%d", &arr[i]); }
  printf("Enter the number of positions to rotate right (k): ");
  scanf("%d", &k);
    
  k = k % n; 
  if(k == 0) 
  { printf("No rotation needed, array remains unchanged.\n"); } 
  else 
  { for(int i = 0; i < k; i++) 
  { arr1[i] = arr[n - k + i]; }
  for(int i = n - k - 1; i >= 0; i--) 
  { arr[i + k] = arr[i]; }
  for(int i = 0; i < k; i++) 
  { arr[i] = arr1[i]; }
    printf("Array after rotating: "); }
  for(int i = 0; i < n; i++) 
  { printf("%d ", arr[i]);}
    
  printf("\n");
  return 0;
}