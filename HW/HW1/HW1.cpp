#include<stdio.h>
int main(){
	printf("Please enter five floating-point numbers.(real numbers)\n");
	float a,b=0;
	scanf("%f",&a);
	printf("the first number is%f\n",a);
	b=a+b;
	scanf("%f",&a);
	printf("the second number is%f\n",a);
	b=a+b;
	scanf("%f",&a);
	printf("the third number is%f\n",a);
	b=a+b;
	scanf("%f",&a);
	printf("the forth number is%f\n",a);
	b=a+b;
	scanf("%f",&a);
	printf("the fifth number is%f\n",a);
	b=a+b;
	printf("the sum of the numbers:%f\n",b);
	b/=5;
	printf("the average of the five floating-point numbers is:%f\n",b);
	return 0;
}
