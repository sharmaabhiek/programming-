#include <stdio.h>
int main() {
    int num, shift;
     {
        printf("ABHISHEK SHARMA\n");
        printf("Enter a positive integer: ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (num <= 0);
    printf("Enter the number of positions to shift left: ");
    scanf("%d", &shift);
    int result = num << shift;
    printf("Result of left shift: %d << %d = %d\n", num, shift, result);
    return 0;
}
