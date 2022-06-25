#include <stdio.h>
double EvalPoly(float,float,float,float);
int main(){
	float a,b,c,x;
	printf("Please input a,b,c,x!\n");
	scanf("%f %f %f %f",&a,&b,&c,&x);
	printf("The result is %lf.",EvalPoly(a,b,c,x));
	return 0;
}
double EvalPoly(float a, float b, float c, float x){
	return a*x*x+b*x+c;
}
