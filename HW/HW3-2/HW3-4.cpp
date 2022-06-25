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
		s1+=a0;
		for(int e=1;e<=a;e+=a){
			s1=s1*x;
		}
	}
	printf("ans=%lf, MUL times=%d, ADD times=%d\n",s1,n+1,n+1);
	return 0;
}
