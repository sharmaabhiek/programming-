#include<stdio.h>
int main() 
{
   printf("ABHISHEK SHARMA");
   int i, n, sum = 0;
   printf("\nEnter any number: ");
   scanf("%d", &n);
   for (i = 1; i <= n; i++) {
      printf("%d ", i);
      sum = sum + i;
   }
   printf("\n\nSum of natural numbers from (1 to n) = %d", sum);
   return 0;
}
