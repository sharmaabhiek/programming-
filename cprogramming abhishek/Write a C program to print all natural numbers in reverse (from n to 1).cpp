
#include <stdio.h>
int main() {
printf("ABHISHEK SHARMA");
    int n;
    // OUTPUT the value of n
    printf("Enter a natural number (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive natural number.\n");
    } else {
        // Print numbers from n down to 1
        for (int i = n; i >= 1; i--) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
