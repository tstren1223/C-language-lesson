#include<stdio.h>
int IsPrime(int);
double EvalPoly(float,float,float,float);
double rd(double,int);
int main(){
	int l;
	printf("-----case a-----\n");
	scanf("%d",&l);
	printf("The result is %d.",IsPrime(l));
	float a,b,c,x;
	printf("\n----- case b-----\n");
	scanf("%f %f %f %f",&a,&b,&c,&x);
	printf("The result is %lf.\n",EvalPoly(a,b,c,x));
	double x1;
	int y;
	printf("-----case c-----\n");
	scanf("%lf %d",&x1,&y);
	printf("The result is %.*lf",y,rd(x1,y));
	return 0;
}
int IsPrime(int x){
	int a=0;
	for(int i=2;i*i<=x;i++)
		x%i==0?a++:NULL;
	return a==0?1:0;
}
double EvalPoly(float a, float b, float c, float x){
	return a*x*x+b*x+c;
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
