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
	printf("-------------\n      part1     \n-------------\nn = ");
	while(scanf("%d",&n)!=EOF){
		printf("%lld ways\n",step(n));
		printf("n = ");
	}
	printf("-------------\n      part2     \n-------------\nn = ");
	while(scanf("%d",&n)!=EOF){
		printf("%lld ways\n",rec(n));
		printf("n = ");
	}
	return 0;
}
