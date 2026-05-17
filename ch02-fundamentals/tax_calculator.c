/* KN King - Chapter 2: C Fundamentals
   Program: Taxxed amount with User Input
   Concepts: variables, scanf, printf, float arithmetic */
#include <stdio.h>
int main (void){
    float amount, taxxed_amount;
    printf("Enter an amount:");
    scanf("%f", &amount);
    taxxed_amount = amount * 1.05;
    printf("With taxed added: %.2f\n", taxxed_amount);
    return 0;
}