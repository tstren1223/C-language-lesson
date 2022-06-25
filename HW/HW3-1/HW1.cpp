#include<stdio.h>
int main (){
	int a,s=0;
	printf("Please enter an even number.(>=10)");
	scanf("%d",&a);
	for(int i=10;i<=a;++i){
		printf("%d+",2*i);
		s=s+2*i;
	}
	printf("=%d\n",s);
	float s1=0;
	double s2=0;
	printf("Please enter a number.");
	scanf("%d",&a);
	for(int i=1;i<=a;i+=2){
		printf("%f+",1./i);
		s1=s1+1./i;
	}
	printf("=%f\n",s1);
	s1=0;
	printf("Please enter a number.");
	scanf("%d",&a);
	for(double b=1,i=1;i<=a;i=i+1.0){
		printf("1/");
		for(int a=1;a<=i;a++){
			printf("%d*",a);
			b=a*b;
	}
	s2+=1.0/b;
	b=1;
	printf("+");
	}
	printf("=%lf\n",s2);
	s1=0;
	printf("Please enter a number.");
	scanf("%d",&a);
	for(int i=1,sign=1;i<=a;i++){
		printf("%d+",i*sign);
		s1=s1+i*sign;
		sign=-sign;
	}
	printf("=%f\n",s1);
	s1=0;
		printf("Please enter a number.");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		for(int a=1;a<=i;a++){
			printf("%d+",a);
			s1=s1+a;
	}
	}
	printf("=%f\n",s1);
	return 0;
}
