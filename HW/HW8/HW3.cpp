#include <stdio.h>
double rd(double,int);
int main(){
	double x;
	int y;
	printf("Please input a number and its decimal places .\n");
	scanf("%lf %d",&x,&y);
	printf("The round-off result is %.*lf",y,rd(x,y));
	return 0;
}
double rd(double x,int y){
	for(int i=1;i<=y;i++){
		x*=10;
	}
	x=(x+0.5);
	for(int i=1;i<=y;i++){
		x/=10;
	}
	return x;
}
