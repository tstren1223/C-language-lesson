#include<stdio.h>
#include<conio.h>
int main(){
	printf("Please enter two int numbers:(a,b)\n");
	int a,b;
	scanf("%d %d",&a,&b);
	printf("The sum of a and b is %d\nThe product of a and b is %d\nThe difference of a and b is %d\nThe quotient of a and b is %d\n",a+b,a*b,a-b,a/b);
	printf("Please enter two float numbers:(c,d)\n");
	float c,d;
	scanf("%f %f",&c,&d);
	printf("The sum of c and d is %f\nThe product of c and d is %f\nThe difference of c and d is %f\nThe quotient of c and d is %f\n",c+d,c*d,c-d,c/d);
	printf("Please enter two double numbers:(e,f)\n");
	double e,f;
	scanf("%lf %lf",&e,&f);
	printf("The sum of e and f is %lf\nThe product of e and f is %lf\nThe difference of e and f is %lf\nThe quotient of e and f is %lf\n",e+f,e*f,e-f,e/f);
	printf("Please enter a int number and a float number:(g,h)\n");
	int g;
	float h;
	scanf("%d %f",&g,&h);
	printf("The sum of g and h is %f\nThe product of g and h is %f\nThe difference of g and h is %f\nThe quotient of g and h is %lf\n",g+h,g*h,g-h,g/h);
	getch();
	return 0;
} 
