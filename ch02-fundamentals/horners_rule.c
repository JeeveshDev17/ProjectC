/* KN King - Chapter 2: C Fundamentals
   Program: Polynomial function value calculator with User Input with horners rule
   Concepts: variables, scanf, printf, int arithmetic */
#include <stdio.h>
int main(void){
    int x, sol;
    printf("Enter the value of x:");
    scanf("%d", &x);
    sol = ((((x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    printf("The value of x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is: %d\n", sol);
    return 0;
}