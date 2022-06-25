#include <stdio.h>
int main (){
	double a=0,b=0,a1,b1,h2=0,h=0.1,h1,sum=0,c;
	int j;
	long long n;
	printf("f(a)=10,f(b)=8370,h=0.1,n=100\n");
	for(j=1;j<=99;j++){
		a+=2*(8*h*h*h+3*h*h+6*h+10);
		h+=0.1;
	}
	//printf("a=%lf,h=%lf",a,h2);
	a+=8380;
	printf("answer by a:%lf\n",a*0.05);
	h=0;
	
	for(j=0;j<=99;j++){
		b+=(8*h*h*h+3*h*h+6*h+10)*0.1;
		h+=0.1;
	}
	printf("answer by b:%lf\n",b);
	printf("Please input an interval:a and b\na=");
	scanf("%lf",&a1);
	printf("b=");
	scanf("%lf",&b1);
	printf("Please enter a n:");
	scanf("%lld",&n);
	h1=(b1-a1)/n;
	//printf("h=%lf\n",h1);
	c=1;
	sum=0;
	//printf("c=%lf b=%lf h1=%lf",c,b1,h1);
	while(b1-c*h1>0){
		sum+=2*(8*(c*h1)*(c*h1)*(c*h1)+3*(c*h1)*(c*h1)+6*(c*h1)+10);
		c++;
		//printf("c=%.15lf\n",c);
		//printf("sum=%.15lf\n",sum);
	}
	//printf("%lf\n",sum);
	sum+=8*(a1*a1*a1+b1*b1*b1)+3*(a1*a1+b1*b1)+6*(a1+b1)+20;
	//printf("%lf\n",sum);
	//printf("Trapezoidal Rule: %.12lf\n",sum*h1*0.5);
	printf("answer by a:%.15lf\n",sum*h1*0.5);
	sum=0;
	c=a1;
	while(b1-c*h1>0){
		sum+=(8*(c*h1)*(c*h1)*(c*h1)+3*(c*h1)*(c*h1)+6*(c*h1)+10);
		//printf("sum=%.15lf,c=%.15lf\n",sum*h1,c*h1);
		c++;
		//printf("sum=%.15lf,c=%.15lf\n",sum,c*h1);
	}
	//printf("Rectangular Rule: %.12lf\nplease input h:",sum);
	
	printf("answer by b:%.15lf\n",sum*h1);
	return 0;
}
