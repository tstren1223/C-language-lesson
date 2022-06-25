#include<stdio.h>
int round(double y){
	return (int)(y+0.5);
}
int main(){
	double x;
	int ix;
	printf("Enter the data x:\n");
	scanf("%lf",&x);
	ix=round(x);
	printf("Round of x=%d\n",round(x));
	printf("Round of x=%d\n",(int)(x+0.5));
	
	return 0;
}
