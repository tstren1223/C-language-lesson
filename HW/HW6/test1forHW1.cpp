#include <stdio.h>
int main(){
	double t=0.1,sum=0,sum1=0,k=0.1;
	for(int i=1;i<=1000;i++){
		sum+=i*t;
		sum1+=k;
		printf("%t=%.15lf,k=%.15lf\n",i*t,k);
		k+=t;
		//printf("%t=%.15lf,k=%.15lf\n",i*t,k);
	}
	return 0;
}
