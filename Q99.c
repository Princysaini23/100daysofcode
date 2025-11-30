// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
int main() 
{
  int i;
  char date[10], day[3], month[3], year[5];
  printf("Enter the date in the format(dd/mm/yyyy, month in number): ");
  scanf("%s", date);
  char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  strncpy(day, date, 2);
  day[2] = '\0';
  strncpy(month, date + 3, 2);
  month[2] = '\0';
  strncpy(year, date + 6, 4);
  year[4] = '\0';
  i = atoi(month);
  if(i >= 1 && i <= 12)
  { printf("The date is %s-%s-%s\n", day, months[i - 1], year); }
  else
  { printf("Error. Invalid month\n"); }
  return 0;
}
