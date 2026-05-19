/* KN King - Chapter 2: C Fundamentals
   Program: Remaining Balance of Loan with User Input
   Concepts: variables, scanf, printf, float arithmetic */
#include <stdio.h>
#define MONTHLY_INTEREST_RATE (1.0f/1200.0f) 
int main(void){
    float loan, payments, interest_rate, balance, first_month, second_month, third_month;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payments: ");
    scanf("%f", &payments);
    first_month = loan - payments + (loan * interest_rate * MONTHLY_INTEREST_RATE);
    printf("Balance remaining after first payment: %.2f\n", first_month);
    second_month = first_month - payments + (first_month * interest_rate * MONTHLY_INTEREST_RATE);
    printf("Balance remaining after second payment: %.2f\n", second_month);
    third_month = second_month - payments + (second_month * interest_rate * MONTHLY_INTEREST_RATE);
    printf("Balance remaining after third payment: %.2f\n", third_month);
    return 0;
}