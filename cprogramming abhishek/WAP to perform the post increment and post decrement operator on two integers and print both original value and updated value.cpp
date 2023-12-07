
#include <stdio.h>

int main() {
    int num1, num2;
    printf("ABHISHEK SHARMA\n");
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int postIncNum1 = num1++;
    int postDecNum2 = num2--;

    printf("Original value of num1: %d\n", num1);
    printf("Updated value of num1 (after post-increment): %d\n", postIncNum1);

    printf("Original value of num2: %d\n", num2);
    printf("Updated value of num2 (after post-decrement): %d\n", postDecNum2);

    return 0;
}
