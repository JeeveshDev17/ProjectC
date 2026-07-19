/* KN King - Chapter 3: Input Output
   Program: Shows date in another format
   Concepts: variables, scanf, printf*/
#include <stdio.h>

int main(void)
{
  int month, day, year;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  if (month >= 1 && month <= 12)
  {
    
    printf("You entered the date %d %.2d %.2d\n", year, month, day);
    return 1;
  
  }

  else 
  {
    printf("You entered an invalid date\n");
  }

  return 0;
}