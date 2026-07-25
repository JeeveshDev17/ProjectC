/* KN King - Chapter 3: Input Output
   Program: Telephone number
   Concepts: variables, scanf and printf format*/
#include <stdio.h>

int main(void){
    
    int area_code, telephone_prefix, line_number;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%3d) %3d-%4d", &area_code, &telephone_prefix, &line_number);
    printf("You entered %d.%d.%d\n", area_code, telephone_prefix, line_number);

    return 0;
}