/* KN King - Chapter 2: C Fundamentals
   Program: Bill value calculator with User Input
   Concepts: variables, scanf, printf, int arithmetic mod */
#include <stdio.h>
int main(void){
    int amount, twenties, tens, fives, ones;
    printf("Enter an amount:");
    scanf("%d", &amount);
    twenties = amount / 20;
    printf("$20: %d\n", twenties);
    tens = (amount % 20) / 10;
    printf("$10: %d\n", tens);
    fives = ((amount % 20) % 10) / 5;
    printf("$5: %d\n", fives);
    ones = ((amount % 20) % 10) % 5;
    printf("$1: %d\n", ones);
    return 0;
}