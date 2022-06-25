#include <stdio.h>
int main(){
	printf("Please input a,b,x,c,d,y sequentially!\nInput a:");
	float sum=1,x,y;
	scanf("%f",&x);
	sum*=2./3*x;
	printf("Input b:");
	scanf("%f",&x);
	sum/=x;
	printf("Input x:");
	scanf("%f",&x);
	sum*=x*x*x;
	printf("Input c:");
	scanf("%f",&x);
	printf("Input d:");
	scanf("%f",&y);
	x=x-y;
	printf("Input y:");
	scanf("%f",&y);
	sum+=x*y*y;
	printf("ans = %f",sum);
	return 0;
}
