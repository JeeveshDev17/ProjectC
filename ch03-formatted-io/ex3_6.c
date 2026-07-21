/* KN King - Chapter 3: Formatted I/O
   Program: Exercise 3.6 - Add fractions with spaces around /
   Concepts: scanf format string, spaces, fraction arithmetic */
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("Sum is %d/%d\n", result_num, result_denom);

    return 0;
}