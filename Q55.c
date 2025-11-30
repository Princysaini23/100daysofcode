//Q55: A program to print all the prime numbers from 1 to n
#include <stdio.h>

int main() {
    int i, j, n, m;
    printf("Enter the range: ");
    scanf("%d", &n);
    
    for(i=2; i<=n; i++)
    { m = 0;
      for(j=2; j<=i-1; j++) 
    { if(i % j == 0) 
      { m++; }
    }
    if(m == 0) 
    { printf("%d ", i); }
    }    
    return 0; 
}

