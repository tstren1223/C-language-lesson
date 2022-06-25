#include <stdio.h>
int main(){
	float x;
	long long p;
	printf("Please input a floating-point numbers:\n");
	scanf("%f",&x);
	printf("%.3f =%d + %f\n",x,(int)(x*1000/1000),(float)((int)(x*1000)%1000/1000.0));
	printf("Please input 7-9 digits number:\n");
	scanf("%lld",&p);
	printf("%d,%03d,%03d",p/1000000,p%1000000/1000,p%1000);
	return 0;
}
