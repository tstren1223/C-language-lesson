#include <stdio.h>
int main(){
	int sign;
	double d,a,x,sum;
	while(scanf("%lf",&x)){
		d=x;
		a=1;
		sign=1;
		sum=0;
		while((x>0)?1/(a*d)>1e-12:-(1/(a*d))>1e-12){
			sum+=sign/(a*d);
			a+=2;
			d*=x*x;
			sign=-sign;
			//printf("add=%.12lf\n",d/a);
		}
		printf("arccot(%lf)=%.10lf\n",x,sum);
	}
	return 0;
}
