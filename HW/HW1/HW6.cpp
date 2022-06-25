#include<stdio.h>
int main(){
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
