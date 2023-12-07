#include <stdio.h>
int main() {
int l, b, h, volume;
printf ("Length of the cuboid : ");
scanf ("%d", &l);
printf ("Breadth of the cuboid : ");
scanf ("%d", &b);
printf ("Height of the cuboid : ");
scanf ("%d", &h);
    volume = l * b * h;
printf ("\nVolume of cuboid = %d * %d * %d = %d", l, b, h, volume);
    return 0;
