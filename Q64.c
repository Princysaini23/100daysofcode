//Q64: A program to find the digit that occurs the most times in an integer number.
#include<stdio.h>
int main()
{
    int i, j, n, arr[100], count, digit;
    printf("Enter the integer: ");
    scanf("%d", &n);
    int count_arr[10] = {0};
    for(; n!=0; n/=10)
    { j = n % 10;
      count_arr[j]++; }
    count = 0;
    digit = 0;
    for(i=0; i<=9; i++)
    { if( count_arr[i] > count)
    { count = count_arr[i];
      digit = i; }
    }
    printf("The most frequent digit is %d", digit);
    
    return 0;
}