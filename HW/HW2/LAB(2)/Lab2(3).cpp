#include<stdio.h> 
 
int main() {     
	double n1,n2,n3,n4;     
	float radius;     
	const float Math_PI =3.14159;          
	printf("Input: ");     
	scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);     
	printf("Radius: ");     
	scanf("%f",&radius);
	printf("\n%lf %lf %lf %lf\n",n1,n2,n3,n4);     
	printf("\n12345678901234567890123456789012345678901234567890\n");     
	printf("%10.5lf + %-12.3lf = %16.10lf\n",n1,n2,n1+n2);     
	printf("%010.4lf - %-12.9lf = %-7.5lf\n",n1,n2 ,n1-n2);     
	printf("%-10.3lf * %12.5lf = %016.8lf\n", n1, n2 ,n1*n2);     
	printf("%-10.7lf / %012.2lf = %10.8lf\n", n1, n2, n1/n2);     
	printf("2 * pi * %.4f = %017.4f\n", radius,(2*Math_PI*radius));          
	return 0; 
} 
