#include <stdio.h>
typedef long long ll;
ll powmod(ll n,ll k,ll m){
	ll result=1;
	n%=m;//考慮n>m 
	while(k){
		if(k&1){  //考慮k是奇數     
			result=result*n%m;//把奇數做處理又不會有overflow的問題------->只有奇數才需要乘進去!!! 
			}
		n=n*n%m;//把n做處理以便縮小k 
		k>>=1;//把k/2縮小指數!!! 
	}
	return result;
}
int main(){
	ll n,k,m;
	
	printf("Please enter a base n,pow k and mod m\n");
	while(scanf("%lld %lld %lld",&n,&k,&m)){
	printf("The result is %lld\n",powmod(n,k,m));
	
	printf("Please enter a base n,pow k and mod m\n");
}
	return 0;
	
}
