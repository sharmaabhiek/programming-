#include <stdio.h>
int main () {
int a, b;
printf ("Enter 1st number :- ");
scanf ("%d", &a);
printf ("Enter 2nd number :- ");
scanf ("%d", &b);
a = a + b;	/*a = %d+%d = %d*/ printf ("\na = %d", a);
b = a - b;	/*b = %d-%d = %d*/ printf (" b = %d", b);
a = a - b;	/*a = %d-%d = %d*/ printf (" a = %d\n", a);
printf ("\nSwap numbers are :\na = %d  \nb = %d", a, b);
return 0;
}
