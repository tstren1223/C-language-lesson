#include <stdio.h>
int main(){
	int x;
	int l,sum=0,b=1;
	
	scanf("%d",&x);
	
	while(x){
	l=x%10;
	sum+=l*b;
	b*=2;
	//printf("x=%lf,l=%d,sum=%d\n",x,l,sum);
	x/=10;
	}
	printf("%d",sum);
	return 0;
}
