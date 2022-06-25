#include <stdio.h>
long long rec(long long n){
	if(n==1){
		return 1;//1
	}
	if(n==2){
		return 2;//1+1or2
	}
	if(n>2)
		return rec(n-1)+rec(n-2);
}
int main(){
	long long n;
	printf("Please input number to fill.\n");
	while(scanf("%d",&n)!=EOF){
		printf("The result of %lld to fill is %lld.\n",n,rec(n));
		printf("Please input number to fill.\n");
	}
	
	return 0;
}
