#include <stdio.h>
long long step(long long n){
	if(n==1){
		return 1;//1
	}
	if(n==2){
		return 2;//1+1or2
	}
	if(n==3){
		return 4;//1+1+1or1+2or2+1or3
	}
	if(n>3)
		return step(n-1)+step(n-2)+step(n-3);
}
int main(){
	long long n;
	printf("Please input number to step\n");
	while(scanf("%d",&n)!=EOF){
		printf("The result of %lld to step is %lld\n",n,step(n));
		printf("Please input number to step\n");
	}
	
	return 0;
}
