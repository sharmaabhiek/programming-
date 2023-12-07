
#include <stdio.h>
intmain() {
int a, b, c;
printf ("Enter 1st number: ");
scanf ("%d", &a);
printf ("Enter 2nd number: ");
scanf ("%d", &b);
printf ("Enter 3rd number: ");
scanf ("%d", &c);
 a = a+b; printf("\na=%d",a);
    b = b+c; printf(" b=%d",b);
    c = c+a; printf(" c=%d",c);
    a = c-a; printf(" a=%d",a);
    b = c-b; printf(" b=%d",b);
    c = c-(a+b); printf(" c=%d\n",c);
printf("\nSwap numbers are a = %d, b = %d & c = %d", a, b, c);
    return 0;
}
