#include<stdio.h>
#include<conio.h>
int main(){
	printf("Please enter a floating-point value.\n");
	float a;
	int b;
	scanf("%f",&a);
	b=a;
	printf("The input value is %f.\nThe whole part is %d.\nhTe decimal(fraction) part is %f.\n",a,b,a-b);
	getch();
	return 0;
} 
