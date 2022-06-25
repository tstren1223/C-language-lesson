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
	printf("Please enter the amount desired\n");
	while(scanf("%lld",&desi)){
		if(desi%10){
			printf("Wrong number!Please input again!\n");
		}
		else{
			dis(desi,&a,&b,&c);
			printf("%lld is dispensed to 50s: %lld, 20s: %lld, 10s: %lld.\n",desi,a,b,c);
		}
		printf("Please enter the amount desired\n");
	}
	return 0;
}
