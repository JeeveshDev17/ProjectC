#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two numbers separated by /: ");
    scanf("%d /%d", &a, &b);
    printf("First: %d Second: %d\n", a, b);
    return 0;
}