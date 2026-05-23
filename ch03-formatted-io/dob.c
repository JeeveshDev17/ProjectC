/* KN King - Chapter 3: Input Output
   Program: Shows date in another format
   Concepts: variables, scanf, printf*/
#include <stdio.h>

int main(void)
{
  int month, day, year;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("You entered the date %d%.2d%.2d\n", year, month, day);

  return 0;
}