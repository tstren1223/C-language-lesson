#include<stdio.h>
int main (){
	double f0=2e10,f1=2.0000004e10,c=6.685e8;
	printf("v=%lf \n",c*(f1-f0)/(f1+f0)); 
	printf("f1=%lf",-(55+c)*f0/(55-c));
	return 0;
}
