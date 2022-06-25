#include<stdio.h>

int main()
{
	
	long long n1=1,i1=1;
	double e=1;
	while(1./n1>1e-6)
	{
		e+=1./n1;
		i1++;
		n1*=i1;
	}
	printf("------ (1) ------\n");
	printf("(a)%.10lf\n",e);
	
	n1=1;
	i1=1;
	e=1;
	double x=1,y=2;
	while(y-x>1e-03)
	{
		e+=x;
		i1++;
		n1*=i1;
		y=x;
		x=1./n1;
	}
	printf("(b)%11.10lf\n",e);
	
	int n3=1,sign=1;
	double x1,x2,a2=0;
	printf("------ (2) ------\n");
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
	
	printf("%.10lf\n",a2);
	
	long long i=1,n,nl;
	printf("------ (3) ------\n");
	printf("x= ");
	scanf("%lld",&n);
	nl=n;
	while(nl>=10)
	{
		nl/=10;
		i*=10;
	}
	
	while(i>=1)
	{
		printf("%lld ",n/i);
		n=n-n/i*i;
		i/=10;
	
	}
	return 0;
} 
