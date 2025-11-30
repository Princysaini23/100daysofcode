/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*  */
#include<stdio.h>
int main()
{
    int i, j, k, l;
    l = 3;
    for(i=1; i<=l; i++)
    { for(j=1; j<=(2 * i - 1); j++)
    { printf("*"); 
      printf("\n"); }
      printf("\n"); }

    for(i=l-1; i>=1; i--)
    { for(j=1; j<=(2 * i - 1); j++)
    { printf("*"); 
      printf("\n"); }
      printf("\n"); }
    return 0;
}



