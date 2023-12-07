#include <stdio.h>
int main() {
    char c;
printf ("Enter a character : ");
scanf ("%c", &c);
    //%d display the integer value of a character
    //%c display the actual character
printf ("\nASCII value of %c = %d", c, c);
    return 0;
}
