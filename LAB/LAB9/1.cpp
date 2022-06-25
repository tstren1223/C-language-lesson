#include<stdio.h>
void dis(long long desi,long long *a,long long *b,long long *c){
	*a=desi/50;
	desi%=50;
	*b=desi/20;
	desi%=20;
	*c=desi/10;
}
int main(){
	long long desi,a,b,c;
	printf("input amount desired:\n");
	while(scanf("%lld",&desi)!=EOF){
		if(desi%10){
			printf("illegal input\n");
		}
		else{
			dis(desi,&a,&b,&c);
			printf("50: %lld\n20: %lld\n10: %lld\n",a,b,c);
		}
		printf("----input amount desired----\n");
	}
	return 0;
}

