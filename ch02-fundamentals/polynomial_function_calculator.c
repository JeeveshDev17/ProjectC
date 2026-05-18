/* KN King - Chapter 2: C Fundamentals
   Program: Polynomial function value calculator with User Input
   Concepts: variables, scanf, printf, int arithmetic */
#include <stdio.h>
int main(void){
    int x, sol;
    printf("Enter the value of x:");
    scanf("%d", &x);
    sol = x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6; 
    printf("The value of x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is: %d\n", sol);
}