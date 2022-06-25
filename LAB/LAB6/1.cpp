#include <stdio.h>
int main(){
	long long i=0;
	double lg=1,ob=2,pi=0,sum=1;
	do{
		pi+=ob/((lg)*(sum));
		lg=lg*(2*i+1)*(2*i+2)/((i+1)*(i+1));
		ob*=2;
		sum+=2;
		i++;	
	}while(ob/((lg)*(sum))>1e-20);
	printf("%.14lf",pi);
	return 0;
}
