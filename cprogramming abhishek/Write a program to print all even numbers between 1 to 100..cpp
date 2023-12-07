#include<stdio.h>
int main() {
   int i;
   printf("ABHISHEK SHARMA\n");
   printf("\nEven numbers from 1 to 100 :\n");
for (i = 1; i <= 100; i++) {
      if (i % 2 != 0) {
          continue;
      }
      printf("%d  ", i);
   }
   return 0;
}
