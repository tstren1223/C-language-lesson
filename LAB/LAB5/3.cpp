#include <stdio.h>
int main(){
	unsigned long long int n,x1,sum=0;
	unsigned long long int l,b,d;
	
	printf("------(1)------\nInput n = ");
	while(scanf("%lld",&n)!=EOF){
		sum=0;
		x1=n;
		while(x1){
			l=x1%100;
			sum=sum*100+l;
			x1/=100;
			//printf("l=%lld,x1=%lld\n",l,x1);
		}
		printf((sum==n)?"Two-Digit Palindrom\n":"Not Two-Digit Palindrom\n");
		printf("Input n = ");
	}
	printf("\n------(2)------\nInput x = ");
	double x,sum1=1,sum2=0;
	double c=1,k=1;
	while(scanf("%lf",&x)!=EOF){
		while((sum1*x/(1+x*x)>1e-20||-(sum1*x/(1+x*x))>1e-20)){
			//printf("sum1=%lf,sum2=%lf",sum1,sum2);
			(sum1==1)?NULL:(k>c)?sum2=sum1*x/(1+x*x)+sum2,c++:NULL;
			//printf("sum1=%lf,sum2=%lf",sum1,sum2);
			
			sum1=sum1*2*k*x*x/((2*k+1)*(1+x*x));
			//printf("%lf",2*k*x*x/((2*k+1)*(1+x*x)));
			//printf("k=%lf,c=%lf,",k,c);
			k++;
			//printf("sum1=%lf,sum2=%lf\n",sum1,sum2);
			//printf("x=%.20lf\n",sum1*x/(1+x*x));
		}
		printf("arctan(%lf) = %.12lf\n",x,sum2+1*(x)/(1+x*x));
		printf("Input x = ");
		
		sum1=1;
		sum2=0;
		c=1;
		k=1;
	}

	return 0;
}
