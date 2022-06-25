#include<stdio.h>
int main(){
	int a;
	printf("(A)\nPlease input enter a legth of time in seconds:\n");
	scanf("%d",&a);
	int b,c,d;
	b=a/3600;
	c=(a%3600)/60;
	d=(a%3600)%60;
	printf("%d seconds=%d hours,%d minutes,%d seconds\n",a,b,c,d);
	printf("\n(B)\nProgram to convert Fahrenheit to Celsius.\n");
	printf("Fahrenheit temperature?\n");
	float e;
	scanf("%f",&e);
	e=5/9.*(e-32);
	printf("Celsius equivalent:%f",e);
	return 0;
}
