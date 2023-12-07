#include<stdio.h>
 int main(){
 	int num;
 	printf("enter a number: ");
 	scanf("%d",&num);
 	if(num%2==0)
 	 printf("number is even\n");
 	else 
 	{
 		printf("number is odd\n");
 		num*=2;
 		printf("now the number is %d\n",num);
 		
	 }
 	
 	return 0;
 }
