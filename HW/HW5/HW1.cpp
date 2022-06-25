#include <stdio.h>
int main(){
	double e=2;
	double i=2,k=2;
	while(1/k>1e-6||i/k-1/k>0.001){
		e+=1/k;
		i++;
		k*=i;
	}
	printf("e=%lf",e);
	return 0;
}
