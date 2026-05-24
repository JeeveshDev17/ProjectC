/* KN King - Chapter 3: Formatted input and output
   Program: Exercise 3.1 - Using printf to format output
   Concepts: variables, printf, format specifiers
*/ 

#include <stdio.h>
int main(void){

    printf("%8.6d,%4d\n", 86,1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g\n",0.0000009979);
    return 0;
}