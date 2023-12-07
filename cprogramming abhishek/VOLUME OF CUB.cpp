#include <stdio.h>
int main() {
int a, volume;
printf ("Enter the side of a cube (a) : ");
scanf ("%d", &a);
    volume = a * a * a;
printf ("\nVolume of cube = %d * %d * %d = %d", a, a, a, volume);
    return 0;
}
