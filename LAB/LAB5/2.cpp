#include <stdio.h>
int main(){
	int n3=1,sign=1;
	double x1,x2,a2=0;
	printf("x= ");
	scanf("%lf",&x1);
	x2=x1;
	while((x2<0)?-x2>1e-08:x2>1e-08)
	{
		a2+=x2*sign;
		n3++;
		sign=-sign;
		x2=x2*x1*x1/(2*n3-2)/(2*n3-1);
	}
	
	printf("sin(%.2lf)=%.10lf\n",x1,a2);
	
	long long i=1,n,nl;
	printf("\n");
	scanf("%lld",&n);
	nl=n;
	while(nl>=10)
	{
		nl/=10;
		i*=10;
	}
	
	while(i>=1)
	{
		printf("%-7lld ",n/i);
		n=n-n/i*i;
		i/=10;
	
	}
	printf("\n");
	
	long long x,x5;
	long long l,sum=0,b=1;
	
	scanf("%lld",&x);
	x5=x;
	
	while(x5){
	l=x5%10;
	sum+=l*b;
	b*=2;
	//printf("x=%lf,l=%d,sum=%d\n",x,l,sum);
	x5/=10;
	}
	printf("(%lld)_2 = (%lld)_10",x,sum);
	return 0;
}
