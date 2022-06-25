#include<stdio.h>
void order(long long *a,long long *b){
	long long k;
	if(*a>*b){
		k=*a;
		*a=*b;
		*b=k;
	}
}
/*
void order2(int *x,*y){
	if(x!=y&&*x>*y){ //x!=y is a very important condition in this way
		*x ^= *y;//xor ------>x = x xor y
		*y ^= *x;//兩次的xor可以找出另一個值----->y= x xor y xor y=x xor 0 =x
		*x ^= *y;
	}
}
void order3(int *x,int *y){
	if(*x>*y){
		*x=*x+*y;
		*y=*x-*y;
		*x=*x-*y;
	}
}
*/
int main(){
	long long a,b;
	//long long *a1,*b1;
	printf("Please enter two integers\n");
	scanf("%lld %lld",&a,&b);
	//a1=&a,b1=&b;
	order(&a,&b);
	printf("order:%lld %lld\n",a,b);
	return 0;
}
