#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
double plus (int n){
	if(n==1)
		return 0;
	else
		return 1.0/(n*(n-1))+plus(n-1);
}
double pi(int n){
	if(n==0)
		return 4;
	else{
		return 2*n*(2*n+2.0)/((2*n+1.0)*(2*n+1.0))*pi(n-1);
	}
}
int main(){
	int n,l=0;
	scanf("%d",&n);
	printf("The result of a is %lf\n",plus(n));
	printf("The result of b is %lf\n",pi(n));
	while((pi(l)>M_PI)?(pi(l)-M_PI>=0.005):(M_PI-pi(l)>=0.005)){
		l++;
	}
	printf("The results of c are times:%d value :%lf\n",l,pi(l));
	return 0;
}
/*
double computePI2(double n)//double s{
	static double s = 4;
	s*=(2*n)*(2*n+2)/(2*n+1)/(2*n+1);
	
	if(fabs(s-M_PI)<= 0.005
		return s;
	else
		return computePI2(n+1);//,s);
}
