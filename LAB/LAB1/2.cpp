#include<stdio.h>
int main(){
	printf("(A)\nPlease input a five-digit number:\n");
	int a,b,c;
	scanf("%d",&a);
	b=a/10000+a%10000/1000+a%1000/100+a%100/10+a%10;
	printf("\n---(a)---\nSum of digits of %d is %d",a,b);
	c=((a/10000+1)%10*10000+(a%10000/1000+1)%10*1000+(a%1000/100+1)%10*100+(a%100/10+1)%10*10+(a%10+1)%10);
	printf("\n---(b)---\nAfter adding one to each of its digits of %d is %d.\n",a,c);
	int fib1=0,fib2=1,fib3=1;
	printf("(B)\nThe Fibonacci series:%d %d %d",fib1,fib2,fib3);
	fib1=fib2+fib3;
	fib2=fib1;
	printf(" %d",fib1);
	fib1=fib2+fib3;
	fib3=fib1;
	printf(" %d",fib1);
	fib1=fib3+fib2;
	fib2=fib1;
	printf(" %d",fib1);
	fib1=fib2+fib3;
	fib3=fib1;
	printf(" %d",fib1);
	fib1=fib1+fib2;
	fib2=fib1;
	printf(" %d",fib1);
	fib1=fib2+fib3;
	fib3=fib1;
	printf(" %d",fib1);
	fib1=fib1+fib2;
	fib2=fib1;
	printf(" %d",fib1);
	fib1=fib2+fib3;
	fib3=fib1;
	printf(" %d",fib1);
	fib1=fib1+fib2;
	fib2=fib1;
	printf(" %d......\n",fib1);
	return 0;
}
