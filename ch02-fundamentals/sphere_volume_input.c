/* KN King - Chapter 2: C Fundamentals
   Program: Sphere Volume with User Input
   Concepts: variables, scanf, printf, float arithmetic */
#include <stdio.h>
#define PI 3.1415926f
int main(void)
{
    float radius, volume;
    printf("Enter radius of sphere in cm = ");
    scanf("%f", &radius);
    volume = 4.0f/3.0f * PI * radius * radius * radius;
    printf("Volume of sphere with radius %.2f cm = %.2f\n", radius, volume);
    return 0;
}