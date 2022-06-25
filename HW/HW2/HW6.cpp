#include<stdio.h>
#include<conio.h>
int main(){
	printf("Please enter 6 numbers(a,b,c,d,e,f).\n");
	float a,b,c,d,e,f;
	scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&e,&f);
	printf("a is %f.\nb is %f.\nc is %f.\nd is %f.\ne is %f.\nf is %f.\nx is %f.\ny is %f.\n",a,b,c,d,e,f,(c*e-b*f)/(a*e-b*d),(a*f-c*d)/(a*e-b*d));
	getch();
	return 0;
} 
