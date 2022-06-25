#include <stdio.h>
int main(){
	int x,i=0;
	long long a,b,c,d;
	
	while(scanf("%d",&x)){
		i++;
		if(i==1)
			a=x;
		else if(i==2)
			b=x;
		else if(i==3)
			c=x;
		else{
			if(a<b){
				if(b<c){
					d=a;
					a=c;
					c=d;
				}
				else{
					d=a;
					a=b;
					b=d;
				}
			}
			if(c>b){
				if(c>a){
					d=a;
					a=c;
					c=b;
					b=d;
			}
				else{
					d=b;
					b=c;
					c=d;
				}
			}
			//printf("a=%lld b=%lld c=%lld",a,b,c);
			if(x<a)
				a=x;
		}
	}
	printf("The min three number:%lld %lld %lld",a,b,c);
	return 0;
}
