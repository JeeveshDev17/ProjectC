/* KN King - Chapter 3: Input Output
   Program: Shows date in another format
   Concepts: variables, scanf, printf*/
#include <stdio.h>

int main(void)
{
  int month, day, year;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  if (month >= 1 && month <= 12 && day >= 1 && day <= 31 && year >= 1900 && year <= 2100)
  {
    
    printf("You entered the date %d %.2d %.2d\n", year, month, day);
    return 0;
  
  }

  else 
  {
    printf("You entered an invalid date\n");
    return 1;
  }

  return 0;
}