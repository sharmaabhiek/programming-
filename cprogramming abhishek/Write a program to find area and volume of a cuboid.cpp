#include <stdio.h>
int main() {
int l, b, h, area;
printf ("Length of the cuboid : ");
scanf ("%d", &l);
printf ("Breadth of the cuboid : ");
scanf ("%d", &b);
printf ("Height of the cuboid : ");
scanf ("%d", &h);
    area = 2 * (l*b + b*h + h*l);
printf ("\nArea of cuboid = %d * (%d*%d + %d*%d + %d*%d) = %d", 2,l,b,b,h,h,l, area);
    return 0;
}
