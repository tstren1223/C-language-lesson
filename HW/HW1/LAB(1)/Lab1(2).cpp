#include <stdio.h>
int main(){
	printf("\n(A)\nProgram to convert Fahrenheit to Celsius.\n");
	printf("Fahrenheit temperature?\n");
	float e;
	scanf("%f",&e);
	e=5/9.*(e-32);
	printf("Celsius equivalent:%f\n",e);
	printf("(B)\nThe polynomial is f(x)=x^3+5x^2+10x+15\nPlease input x : ");
	int x;
	scanf("%d",&x);
	printf("f(%d) = %d",x,x*x*x+5*x*x+10*x+15);
	return 0;
}
