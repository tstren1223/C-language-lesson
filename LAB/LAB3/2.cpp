#include<stdio.h>
int main (){
	printf("Method (A):\norder=");
	double a0,x,s1=0,v=1;
	int n;
	scanf("%d",&n);
	printf("x=");
	scanf("%lf",&x);
	for(int a=n;a>=0;a--){
		printf("a%d=",a);
		scanf("%lf",&a0);
		for(int e=a;e>0;e--){
			v*=x;
		}
		s1=v*a0+s1;
		v=1;
	}
	int r=0;
	for(int i=1;i<=n;i++){
		r+=i;
	}
	printf("ans=%lf,MUL times=%d,ADD times=%d\nMethod (B):\norder= ",s1,r,n+1);
	s1=0;
	scanf("%d",&n);
	printf("x=");
	scanf("%lf",&x);
	for(int a=n;a>=0;a--){
		printf("a%d=",a);
		scanf("%lf",&a0);
		s1=s1*x+a0;
	}
	printf("ans=%lf, MUL times=%d, ADD times=%d\n",s1,n+1,n+1);
	double f0=2e10,f1=2.0000004e10,c=6.685e8;
	printf("v=%lf \n",c*(f1-f0)/(f1+f0)); 
	printf("f1=%lf",-(55+c)*f0/(55-c));
	return 0;
}
