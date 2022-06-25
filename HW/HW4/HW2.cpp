#include<stdio.h>
int main(){
	double s=0;
	int i=1,sign=1;
	while(1./i>=1e-6){
		s+=1./i*sign;
		i+=2;
		sign*=-1;
	}
	printf("£k/4~=%lf",s);
	return 0;
} 
 
