#include <stdio.h>
double step(long long n,long long *x){
	if(x[n-1]){
		return x[n-1];
	}
	else{
		x[n-1]=step(n-1,x)+step(n-2,x)+step(n-3,x);//°ÅªK°Ê§@ 
		return x[n-1];
	}
}
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
int main(){
	long long n;
	printf("====Part1====\nn = ");
	while(scanf("%lld",&n)!=EOF){
		long long x[n]={0};
		x[0]=1;
		x[1]=2;
		x[2]=4;
		printf("%lf ways\n",step(n,x));
		printf("n = ");
	}
	long long x1,y;
	printf("====Part2====\n");
	while(scanf("%lld %lld",&x1,&y)!=EOF){
		if(y<0)
			printf("power(x, y)= %lf\n",1.0/power(x1,y));
		else
			printf("power(x, y)= %lf\n",power(x1,y));
	}
	return 0;
}
