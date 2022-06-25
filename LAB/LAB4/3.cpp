#include<stdio.h>
int main(){
	int x=1,sum=0,max=0;
	printf("----part A----\ninput numbers:");
	while (x!=0){
		scanf("%d",&x);
		sum+=x;
		sum<=0?sum=0:sum>=max?max=sum:NULL;	
	}
	printf("maximum sum of consecutive is :%d\n",max);
	printf("----part B-----\ninput x and n:");
	long long x1,n,i=0,x2;
	scanf("%lld %lld",&x1,&n);
	x2=x1;
	while(x2<n){
		x2*=x1;
		i++;
	}
	printf("log%.0lld(%.0lld) = %.0lld",x1,n,i);
	return 0;
} 
