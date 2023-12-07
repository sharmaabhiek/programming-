 #include<stdio.h>
 int main(){
 	int a,b,c,big;
 	printf("enter three numbers:");
 	scanf("%d%d%d",&a,&b,&c);
 	 if(a>b)
 	 {
 	 	if(a>c)  //condition if a is greater than c the biggest no is a else biggest number is c 
            big=a;
			else 
			big=c; 	 	
 	 	
	}
 	else
 	{
 	  if(b>c)    //condition if b is greater than c the biggest no is b else biggest number is c 
 	       big=b;
	   		else 
 		  big=c;
	 }
 	printf("the biggest number is %d\n",big);
 	 return 0;
 	 	
 }
