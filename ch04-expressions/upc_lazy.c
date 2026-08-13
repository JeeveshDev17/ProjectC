/* KN King - Chapter 4: Expressions
   Program: UPC Check Digit
   Concepts: variables, scanf, printf format and expressions*/
#include<stdio.h>
int main(void){
    int i, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, k;
    printf("Enter The First (Single) Digit: ");
    scanf("%1d", &i);
    printf("Enter The First Group of Five Digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter The Second Group of Five Digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
    k = 9-(((3*(i+i2+i4+j1+j3+j5) + i1+i3+i5+j2+j4)-1) % 10);
    printf("Check Digit: %1d", k);
    return 0;
}