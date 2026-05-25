/* KN King - Chapter 3: Formatted input and output
   Program: Exercise 3.2 - Using printf to format output
   Concepts: variables, printf, format specifiers
*/ 

#include <stdio.h>
int main(void){
    float x;
    scanf("%f", &x);
    printf("%-8.1e\n",x);
    printf("%10.6e\n",x);
    printf("%-8.4f\n",x);
    printf("%6.0f\n",x);
    return 0;
}