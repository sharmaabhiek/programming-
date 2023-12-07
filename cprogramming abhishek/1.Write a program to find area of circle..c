#include <stdio.h>
#define pie 3.14
int main() {
    float radius, area;
printf ("Enter the radius of the circle : ");
scanf ("%f", &radius);
    area = pie * radius * radius;
printf ("Area of the given circle = %.4f", area);
    return 0;
}
