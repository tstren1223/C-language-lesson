#include <stdio.h>
int main(){
	double x,sum=0,term;
	int sign=1;
	int i;
	
	printf("Please input x: ");
	scanf("%lf",&x);
	
	term=x;
	for(i=1;i<=11;i+=2){
		sum+=sign*1/term;
		sign*=-1;
		term*=x*x;
	}
	printf("Ans = %lf\n",sum);

	return 0;
}
