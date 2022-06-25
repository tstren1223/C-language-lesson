#include <stdio.h>
int main(){
	long long x;
	long long i=1,a=0,b=0,c=0,d=0,con;
	while(scanf("%lld",&x)){
		a=0;
		b=0;
		i=1;
		while(i<=x){
			con=0;
			for(long long k=1;k<=i;k++){
				if(i%k==0)
					con+=1;
			}
			if(con==2&&a==0)
				a=i;
			else if(con==2&&a!=0)
				b=i;
			if(a!=0&&b!=0)
				(b-a==2)?c=a,d=b,a=b,b=0:a=b,b=0;
			//printf("a=%lld b=%lld c=%lld d=%lld\n",a,b,c,d);
			i++;
		}
		printf("twin prime max numbers:%lld %lld\n",c,d);
	}
	return 0;
}
