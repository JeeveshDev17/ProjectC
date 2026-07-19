/* KN King - Chapter 3: Formatted input and output
   Program: Exercise 3.4 - Using scanf and printf to format output
   Concepts: variables, printf, scanf, format specifiers
*/ 
#include <stdio.h>
int main(void){
    int i,j;
    float x;
    scanf("%d %f %d",&i,&x,&j);
    printf("%d %f %d\n",i,x,j);
    return 0;
}