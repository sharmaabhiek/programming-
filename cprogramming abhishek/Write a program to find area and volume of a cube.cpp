
#include <stdio.h>
int main() {
int a, area;
printf ("Enter the side of a cube (a) : ");
scanf ("%d", &a);
    area = 6 * (a * a);
printf ("\nArea of cube = %d * (%d * %d) = %d", 6, a, a, area);
    return 0;
}
