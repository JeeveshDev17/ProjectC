/* KN King - Chapter 3: Formatted input and output
   Program: Exercise 3.5 - Using scanf and printf to format output
   Concepts: variables, printf, scanf, format specifiers
*/ 
#include <stdio.h>
int main(void){
    float x,y;
    int i;
    scanf("%f %d %f",&x,&i,&y);
    printf("%f %d %f\n",x,i,y);
    return 0;
}