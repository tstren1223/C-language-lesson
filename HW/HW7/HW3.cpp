#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#include <cmath>
int main(){
	int j=0;
	double k1,k2;
	scanf("%lf %lf",&k1,&k2);
	double seed1=k1,seed2=k2;
	const double  mpy = 25173.0;
	const double  inc =13849.0;
	const double  mod =65535.0;
	for(int i=1;i<=1000;i++){
	seed1=fmod(seed1 *mpy + inc, mod);
	seed2=fmod(seed2 *mpy + inc, mod);
	(0.5-(seed1+1)/(mod+1))*(0.5-(seed1+1)/(mod+1))+(0.5-(seed2+1)/(mod+1))*(0.5-(seed2+1)/(mod+1))<=0.25?j++:NULL;
	}
	printf("p=%lf,pi=%lf",j/1000.0,j*4/1000.0);
	return 0;
}
