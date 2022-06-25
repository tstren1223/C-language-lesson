#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
double rec(long long n,double *x){
	if(x[n-1]){
		return x[n-1];
	}
	else{
		x[n-1]=rec(n-1,x)+rec(n-2,x);
		return x[n-1];
	}
}
double plus (long long n){
	if(n==1)
		return 0;
	else
		return 1.0/(n*(n-1))+plus(n-1);
}
double pi(long long n){
	if(n==0)
		return 4;
	else{
		return 2*n*(2*n+2.0)/((2*n+1.0)*(2*n+1.0))*pi(n-1);
	}
}
double err(long long l){
	if((pi(l)>M_PI)?(pi(l)-M_PI>=0.005):(M_PI-pi(l)>=0.005))
		return err(l+1);
	return pi(l);
}
int main(){
	long long n,l=0;
	long long x,y;
	printf("====Part1====\n--------------\n     part_a     \n--------------\n");
	while(scanf("%lld",&n)!=EOF){
		printf("S = %lf\n",plus(n));
	}
	printf("--------------\n     part_b     \n--------------\n");
	while(scanf("%lld",&n)!=EOF){
		printf("PI = %lf\n",pi(n));
	}
	printf("--------------\n     part_c     \n--------------\n");
	printf("M_PI = %lf\nMy_PI = %lf\n",M_PI,err(l));
	printf("\n\n====Part2====\nn = ");
	while(scanf("%lld",&n)!=EOF){
		double x1[n]={0};
		x1[0]=1;
		x1[1]=2;
		printf("%.0lf ways\n",rec(n,x1));
		printf("n = ");
	}
	
	return 0;
}
