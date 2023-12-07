#include<stdio.h>
int main() {
   int i;
   printf("ABHISHEK SHARMA\n");
   printf("\nAlphabets from (a to z) :\n");

   for (i = 97; i <= 122; i++) {       //ASCII value of a = 97
      printf("%c ", i);
   }
   return 0;
}
