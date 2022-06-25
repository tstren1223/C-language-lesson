#include <stdio.h>
int main(){
	long long gcd;
	long long a,b,c,d;
	while(scanf("%lld %lld %lld",&a,&b,&c)){
		/*if(a>b)
			while(a!=b){
			a-b>b?a=a-b:(d=a,a=b,b=d-b);
			//printf("a=%lld b=%lld c=%lld\n",a,b,c);
		}
		else{
			while(b!=a){
			(b-a>a)?b=b-a:(d=b,b=a,a=d-a);
			//printf("a=%lld b=%lld c=%lld\n",a,b,c);
			}
		}
		if(b>c)
			while(b!=c){
			b-c>c?b=b-c:(d=b,b=c,c=d-c);
			//printf("a=%llf b=%llf c=%llf\n",a,b,c);
			}
		else
			while(b!=c){
			c-b>b?c=c-b:(d=c,c=b,b=d-b);
			//printf("a=%llf b=%llf c=%llf\n",a,b,c);
			}*/
		while(a!=b){
			while(a>b)
				a-=b;
			while(b>a)
				b-=a;
		}
		while(b!=c){
			while(b>c)
				b-=c;
			while(b<c)
				c-=b;
		}
		printf("GCD is %lld\n",b);
	}
	return 0;
}
