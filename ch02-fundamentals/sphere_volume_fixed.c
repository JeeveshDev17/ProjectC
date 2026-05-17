#include <stdio.h>
#define PI 3.1415926f
int main(void)
{
    float radius = 10.0f, volume = 4.0f/3.0f * PI * radius * radius * radius;
    printf("Volume of sphere with radius %.2f cm is %.2f\n", radius, volume);
    return 0;
}