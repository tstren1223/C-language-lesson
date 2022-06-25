#include <stdio.h>
typedef long long ll;
ll powmod(ll n,ll k,ll m){
	ll result=1;
	n%=m;//�Ҽ{n>m 
	while(k){
		if(k&1){  //�Ҽ{k�O�_��     
			result=result*n%m;//��_�ư��B�z�S���|��overflow�����D------->�u���_�Ƥ~�ݭn���i�h!!! 
			}
		n=n*n%m;//��n���B�z�H�K�Y�pk 
		k>>=1;//��k/2�Y�p����!!! 
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
