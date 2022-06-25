#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
double power(long long x,long long y){
	if(y<0){
		y*=-1;	
	}
	if(y==0){
		return 1;
	}
	else if(y==1){
		return x;
	}
	else{
		return power(x,y-1)*x;
	}
}
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
	long long x,y;
	printf("====Part1====\n--------------\n     part_a     \n--------------\n");
	while(scanf("%d",&n)!=EOF){
		printf("S = %lf\n",plus(n));
	}
	printf("--------------\n     part_b     \n--------------\n");
	while(scanf("%d",&n)!=EOF){
		printf("PI = %lf\n",pi(n));
	}
	printf("--------------\n     part_c     \n--------------\n");
	while((pi(l)>M_PI)?(pi(l)-M_PI>=0.005):(M_PI-pi(l)>=0.005)){
		l++;
	}
	printf("M_PI = %lf\nMy_PI = %lf\n",M_PI,pi(l));
	printf("\n\n====Part2====\n");
	while(scanf("%lld%lld",&x,&y)!=EOF){
		if(y<0)
			printf("power(x,y)= %lf\n",1/power(x,y));
		else
			printf("power(x,y)= %lf\n",power(x,y));	
	}
	return 0;
}
