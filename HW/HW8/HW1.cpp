#include<stdio.h>
int IsPrime(int);
int main(){
	int l;
	printf("Please input an integer!\n");
	scanf("%d",&l);
	printf(IsPrime(l)?"It is prime!":"It is not prime.");
	return 0;
}
int IsPrime(int x){
	int a=0;
	for(int i=2;i*i<=x;i++)
		x%i==0?a++:NULL;
	return a==0?1:0;
}
