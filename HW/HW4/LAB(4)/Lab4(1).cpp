#include<stdio.h>
int main(){
	double x,s=0;
	printf("Please enter a x:");
	scanf("%lf",&x);
	for(int i=1,b=1;i<=x;i++,b=1){
		for(int j=1;j<=i;j++)
			b*=i;
		s+=b;
	}
	printf("ans:%lf",s);
	s=0;
	for(int i=1,sign=1,b=x;i<=11;i+=2,sign*=-1)
	{
		s+=1./b*sign;
		b*=x*x;
	}
	printf("ans:%lf",s);
	s=0;
	int i=1,sign=1;
	while(1./i>=1e-6){
		s+=1./i*sign;
		i+=2;
		sign*=-1;
	}
	printf("£k/4~=%lf",s);
	return 0;
} 
