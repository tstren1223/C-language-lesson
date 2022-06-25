#include <stdio.h>
int main(){
	printf("(A)\n--- Case I ---\nPlease input five floating-point numbers:\n");
	float a,b,c,d,e;
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	printf("inputs are  %f  %f  %f  %f  %f\n",a,b,c,d,e);
	printf("sum = %f\n",a+b+c+d+e);
	printf("average = %f\n",(a+b+c+d+e)/5);
	printf("--- Case II ---\n");
	printf("Please input five floating-point numbers:\n");
	printf("Inputs : ");
	scanf("%f",&a);
	printf("inputs is %f\n",a);
	b=a;
	printf("Inputs : ");
	scanf("%f",&a);
	printf("inputs is %f\n",a);
	b+=a;
	printf("Inputs : ");
	scanf("%f",&a);
	printf("inputs is %f\n",a);
	b+=a;
	printf("Inputs : ");
	scanf("%f",&a);
	printf("inputs is %f\n",a);
	b+=a;
	printf("Inputs : ");
	scanf("%f",&a);
	printf("inputs is %f\n",a);
	b+=a;
	printf("sum = %f\n",b);
	printf("average = %f\n",b/5);
	printf("(B)\nPlease input a five-digit number:\n");
	int a1,b1,c1;
	scanf("%d",&a1);
	b1=a1/10000+a1%10000/1000+a1%1000/100+a1%100/10+a1%10;
	printf("\n---(a)---\nSum of digits of %d is %d",a1,b1);
	c1=((a1/10000+1)%10*10000+(a1%10000/1000+1)%10*1000+(a1%1000/100+1)%10*100+(a1%100/10+1)%10*10+(a1%10+1)%10);
	printf("\n---(b)---\nAfter adding one to each of its digits of %d is %d.\n",a1,c1);
	
	return 0;
}
