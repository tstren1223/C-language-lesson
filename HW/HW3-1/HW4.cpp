#include<stdio.h>
int main (){
	double f0=2,f1=2.0000004,a=.06685;
	for(int i=0;i<=9;i++){
		f0*=10;
		f1*=10;
		a*=10;
	}
	printf("YOur speed in miles per hour is:%lf\n",a*(f1-f0)/(f1+f0)); 
	printf("If your present speed is 55 miles per hour,then your frequency returnd is:%lf",-(55+a)*f0/(55-a));
	return 0;
}
