#include<stdio.h>
int main(){
	long long n,k,c=1,d=1,l,o=1;
	printf("Input integer n and k:");
	scanf("%lld %lld",&n,&k);
	(n-k)>k?l=k:l=(n-k);
	for(int i=1,b=n;i<l;i=i+2,b=b-2){
		o=o*(b)*(b-1)/(i*(i+1));
		(i+2)>=l&&(l%2==1)?o=o*(b-2)/(i+2):printf("");
	}
	printf("%lld",o);
	return 0;
}
