/* KN King - Chapter 3: Input Output
   Program: Shows product information
   Concepts: variables, scanf and printf format*/
#include <stdio.h>

int main(void){
    int item_number;
    float unit_price;
    int month, day, year;
    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item        Unit            Purchase\n");
    printf("            Price           Date\n");
    printf("%d         $%.2f          %d/%.2d/%.2d\n", item_number, unit_price, month, day, year);
    return 0;
}