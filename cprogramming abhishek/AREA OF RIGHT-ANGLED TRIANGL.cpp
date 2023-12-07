AREA OF RIGHT-ANGLED TRIANGLE:
#include <stdio.h>
int main() {

int b, h, area;
printf ("Enter the base of the triangle: ");
scanf ("%d", &b);
printf ("Enter the height of the triangle: ");
scanf ("%d", &h);
    area = 1/2 * b * h;
printf ("Area of the triangle = %d", area);
    return 0;
}
