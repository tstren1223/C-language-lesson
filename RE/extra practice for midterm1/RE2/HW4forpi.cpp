#include <stdio.h>
int main(){
	double pi4=0, sign=1,denom=1;
	
	while(1/denom>=1E-06){
		pi4+=sign*1/denom;
		sign*=-1;
		denom+=2;
	}
	
	printf("PI/4 = %lf\n",pi4);                              
	return 0;
}
