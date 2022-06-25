#include <stdio.h>
long long power(long long x,long long y){
	if(y<0){
		return power(x,-y);	
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
	long long x,y;
	printf("Please enter x and y for pow(x,y)!\n");
	while(scanf("%lld %lld",&x,&y)!=EOF){
		if(y<0)
			printf("the result is %lf\n",1.0/power(x,y));
		else
			printf("the result is %lld\n",power(x,y));		
		printf("Please enter xand y for pow(x,y)!\n");
	}
	return 0;
}
