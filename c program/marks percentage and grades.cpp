#include<stdio.h>
int main(){
	float m1,m2,m3,m4,total,per;
	char grade;
	printf("enter the marks of 4 subjects: ");
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	total=m1+m2+m3+m4;
	
    per=total/4;
    if (per>=40);
	grade='D';
     if (per>=55);
	grade='C';
	 if (per>=70);
	grade='B';
	 if(per>=85);
	grade='A';
	printf("percentage is %f, grade is %c\n",per,grade);
	printf("try your best next time");
	return 0;
}
