/* KN King - Chapter 3: Input Output
   Program: ISBN Decoder
   Concepts: variables, scanf and printf format*/
#include <stdio.h>

int main(void){
    
    int prefix, group, publisher, item, check_digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check_digit);
    printf("GSI prefix: %d\n", prefix);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", item);
    printf("Check digit: %d\n", check_digit);

    return 0;
}