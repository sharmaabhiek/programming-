#include <stdio.h>
#include <math.h>
intmain() {
    float a, b, c, s, area;
printf("Enter the three sides of the triangle: ");
scanf("%f %f %f", &a, &b, &c);
    s = (a+b+c) / 2;
printf("\nSemi-perimeter = %.2f\n", s);
    area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nArea of the given triangle = %.4f", area);
    return 0;
}
