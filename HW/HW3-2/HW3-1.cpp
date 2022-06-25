#include<stdio.h>
int main (){
	int a,s=0;
	scanf("%d",&a);
	for(int i=10;i<=a;++i){
		s=s+2*i;
	}
	printf("%d\n",s);
	s=0;
	float s1=0;
	double s2=0;
	for(int i=1;i<=101;i+=2){
		s1=s1+1./i;
	}
	printf("%f\n",s1);
	s1=0;
	double b=1;
	for(int i=1;i<=a;i++){
		b*=i;
	s2+=1.0/b;
	}
	printf("%lf\n",s2);
	s2=0;
	b=0;
	for(int i=1,sign=1;i<=a;i++){
		s=s+i*sign;
		sign=-sign;
	}
	printf("%d\n",s);
	s=0;
	for(int i=1;i<=a;i++){
		b+=i;
		s=s+b;
	}
	printf("%d\n",s);
	return 0;
}
