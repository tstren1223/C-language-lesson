#include <stdio.h>
int main(){
	long long i=0;
	double sum,lg=1,ob=1,pi=0;
	do{
		pi+=3*lg/(ob*(2*i+1));
		lg=lg*(2*i+1)*(2*i+2)/((i+1)*(i+1));
		ob*=16;
		i++;	
	}while(3*lg/(ob*(2*i+1))>1e-20);
	printf("%.15lf",pi);
	return 0;
}
