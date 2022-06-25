#include <stdio.h>
int main(){
	int x,sign=1;
	double sum=0,l=1,i=0,k=0;
	
	scanf("%d",&x);
	l=x;
	
	while(l>1e-8){
		sum+=sign*l;
		i+=2;
		sign*=-1;
		l=l*x*x/(i*(i+1));
		printf("\nl=%lf\nsum=%lf",l,sum);
		k++;
	}
	printf("sinx=%lf\n%lf times",sum,k);
	return 0;
}
