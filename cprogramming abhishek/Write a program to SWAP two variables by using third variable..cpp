#include <stdio.h>
Int main() {
int a, b, c;
printf("Enter first number: ");
scanf ("%d", &a);
printf ("Enter second number: ");
scanf ("%d", &b);
    c = a;
    a = b;
    b = c;
printf ("\nSwap numbers are a = %d and b = %d", a, b);
    return 0;
}
