/* KN King - Chapter 3: Input Output
   Program: Maybe Makes a matrix idk really
   Concepts: variables, scanf and printf format*/

#include <stdio.h>
int main(void){

    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);

    printf("%2d %2d %2d %2d\n", a,b,c,d);
    printf("%2d %2d %2d %2d\n", e,f,g,h);
    printf("%2d %2d %2d %2d\n", i,j,k,l);
    printf("%2d %2d %2d %2d\n", m,n,o,p);

    int sums_row1 = a+b+c+d;
    int sums_row2 = e+f+g+h;
    int sums_row3 = i+j+k+l;
    int sums_row4 = m+n+o+p;

    printf("Sums of row 1: %d\n", sums_row1);
    printf("Sums of row 2: %d\n", sums_row2);
    printf("Sums of row 3: %d\n", sums_row3);
    printf("Sums of row 4: %d\n", sums_row4);

    int sums_col1 = a+e+i+m;
    int sums_col2 = b+f+j+n;
    int sums_col3 = c+g+k+o;
    int sums_col4 = d+h+l+p;

    printf("Sums of column 1: %d\n", sums_col1);
    printf("Sums of column 2: %d\n", sums_col2);
    printf("Sums of column 3: %d\n", sums_col3);
    printf("Sums of column 4: %d\n", sums_col4);

    int sums_diag1 = a+f+k+p;
    int sums_diag2 = d+g+j+m;

    printf("Sums of diagonal 1: %d\n", sums_diag1);
    printf("Sums of diagonal 2: %d\n", sums_diag2);

    return 0;

}