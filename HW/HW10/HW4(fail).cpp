#include <stdio.h>
int r=1;
long long times=0;
void step (long long n){
	if(n==1){
		printf("The robot moves 1 meter,from %d meter,this is way %d\n",times,r);
		r++;
	}
	else if(n==2){	
		printf("The robot moves 1 meter,from %d meter\n",times);
		times++;
		step(n-1);
		times--;
		printf("The robot moves 2 meter,from %d meter,this is way %d\n",times,r);
		r++;
	}
	else{
		printf("The robot moves 1 meter from %d meter\n",times);
		times++;
		step(n-1);
		times--;
		printf("The robot moves 2 meter,from %d meter\n",times);
		times+=2;
		step(n-2);
		
		
	}
}
int main(){
	long long n;
	printf("Please input number!\n");
	while(scanf("%lld",&n)!=EOF){
		step(n);
		printf("Please input number!\n");
		r=1;
		times=0;
	}
	return 0;
}
