#include<stdio.h>
int main(){
	printf("Fahrenheit temperature?\n");
	float e;
	scanf("%f",&e);
	e=5/9.*(e-32);
	printf("Celsius equivalent:%f",e);
	return 0;
}
