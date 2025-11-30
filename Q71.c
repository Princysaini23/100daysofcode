//Q71: WAP to read and print a matrix.
#include <stdio.h>
int main() 
{ 
  int n, m, i, j, arr[100][100];
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  printf("Enter the number of columns: ");
  scanf("%d", &m);

  printf("Enter the elements of the matrix.\n");
  for(i=1; i<=n; i++) 
  { for(j=1; j<=m; j++) 
  { printf("Enter element at [%d][%d]: ", i, j);
    scanf("%d", &arr[i-1][j-1]); }
  }
  printf("The matrix is:\n");
  for(i=0; i<n; i++) 
  { for(j=0; j<m; j++) 
  { printf("%d ", arr[i][j]); }
    printf("\n"); }

  return 0;
}