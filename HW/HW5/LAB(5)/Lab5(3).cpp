#include<stdio.h>
#include <math.h>
int main()
{	
	double pi=0.5,i1=sqrt(2),i2=sqrt(2);
	
	do{
		i1=i2;
		pi=pi*i1*0.5;
		i2=sqrt(i1+2);
		//printf("%.16lf",i2/2-i1/2);
		//printf("i1=%.15lf,i2=%.15lf,pi=%.15lf\n",i1,i2,1./pi);
		
	}
	while(sqrt(i2+2)/2-i2/2>1e-15);
	printf("---------- (1)----------\npi=%.15lf\n----------(2)----------\n",1./pi);
	
	
	int x,x1,x2=0,x3,x4=0;
	long long sum=0;
	int l,b=1;
	
	
	while(scanf(" %d",&x)){
	x2=0;
	x4=0;
	printf("Biniary Number: %d\n",x);
	sum=0;
	b=1;
	x1=x;
	while(x1){
		l=x1%10;
		x2=x2*10+l;
		sum+=l*b;
		b*=2;
		x1/=10;
	}
	
	printf("Decimal Number: %lld\n",sum);
	x3=sum;
	while(x3){
		l=x3%10;
		x4=x4*10+l;
		x3/=10;
		//printf("x4=%d\n",x4);
	}
	//printf("x1=%d,x2=%d,x3=%d,x4=%d\n",x1,x2,x3,x4);
	printf((x2==x)?"Biniary: palindromic\n":"Biniary: not palindromic\n");
	printf((x4==sum)?"Decimal: palindromic\n":"Decimal: not palindromic\n\n");
	//printf("x=%lf,l=%d,sum=%d\n",x,l,sum);
	}
	return 0;
}
