#include <stdio.h>
int main(){
	long long x;
	long long i=1,a=0,b=0,c=0,d=0,con;
	int k=1;
	while(scanf("%lld",&x)){
		a=0;
		b=0;
		i=x;
		k=1;
		while(k){
			con=0;
			//printf("%d\n",i);
			/*if(i>10&&i%3==0){
				i+=2;
				continue;
			}
			if(i>10&&i%7==0){
				i+=2;
				continue;
			}
			if(i>10&&i%5==0){
				i+=2;
				continue;
			}
			if(i>100&&i%13==0){
				i+=2;
				continue;
			}
			if(i>100&&i%11==0){
				i+=2;
				continue;
			}
			if(i>100&&i%17==0){
				i+=2;
				continue;
			}
			if(i>100&&i%19==0){
				i+=2;
				continue;
			}*/
			for(long long k=2;k<=i/2;k++){
				if(i%k==0){
					con++;
					break;
				}
			}
			if(con==0&&a==0){
				a=i;
				con=0;
				//printf("1.a=%lld b=%lld c=%lld d=%lld con=%lld\n",a,b,c,d,con);
				for(long long k=2;k<=(i-6)/2;k++){
				if((i-6)%k==0)
					con+=1;
					if(con==1)
					break;
				}
				if(con==0){
					b=i-6;
					c=a;
					d=b;
					a=0;
					b=0;
					k=0;
			}
			else
					a=0;
			}
			//printf("a=%lld b=%lld c=%lld d=%lld con=%lld\n",a,b,c,d,con);
			i--;
		}
		printf("max numbers:%lld %lld\n",c,d);
	}
	return 0;
}
