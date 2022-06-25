#include<stdio.h>
int main (){
	int a,s=0;
	printf("----------Part1----------\nInput a positive integer:\n");
	scanf("%d",&a);
	for(int i=10;i<=a;++i){
		s=s+2*i;
	}
	printf("(a)=%d\n",s);
	float s1=0;
	double s2=0;
	for(int i=1;i<=101;i+=2){
		s1=s1+1./i;
	}
	printf("(b)=%f\n",s1);
	s1=0;
	for(double b=1,i=1;i<=a;i=i+1.0){
		for(int a=1;a<=i;a++){
			b=a*b;
	}
	s2+=1.0/b;
	b=1;
	}
	printf("(c)=%lf\n",s2);
	s2=0;
	for(int i=1,sign=1;i<=a;i++){
		s1=s1+i*sign;
		sign=-sign;
	}
	printf("(d)=%f\n",s1);
	s1=0;
	for(int i=1;i<=a;i++){
		for(int a=1;a<=i;a++){
			s1=s1+a;
	}
	}
	printf("(e)=%f\n",s1);
	double f0=2,f1=2.0000004,c=.06685;
	for(int i=0;i<=9;i++){
		f0*=10;
		f1*=10;
		c*=10;
	}
	printf("----------Part2----------\n(a)=%lf miles per hour\n",c*(f1-f0)/(f1+f0)); 
	printf("(b):%.18e Hz",-(55+c)*f0/(55-c));
	return 0;
	return 0;
}
