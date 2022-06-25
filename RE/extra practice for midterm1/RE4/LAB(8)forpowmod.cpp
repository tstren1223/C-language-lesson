#include <stdio.h>
typedef long long ll;
ll powmod(ll n,ll k,ll m){
	ll result=1;
	n%=m;//σ納n>m 
	while(k){
		if(k&1){  //σ納k琌计     
			result=result*n%m;//р计暗矪瞶ぃ穦Τoverflow拜肈------->Τ计惠璶秈!!! 
			}
		n=n*n%m;//рn暗矪瞶獽罽k 
		k>>=1;//рk/2罽计!!! 
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
