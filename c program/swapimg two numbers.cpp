#include<stdio.h>
  int main(){
  double first, second, temp;
   printf("enter the first number");
   scanf("%d",&first);
   printf("enter the second number");
   scanf("%d",second);
   
    temp= first;
    first=second;
    second= temp;
    
     printf("\nafter swapping, first number= %2lf\n",first);
     printf("\nafter swaping, second number= %2lf\n",second);
     return 0;
 }
