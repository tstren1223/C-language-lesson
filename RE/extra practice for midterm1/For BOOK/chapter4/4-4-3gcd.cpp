#include<stdio.h>
int main(){
	int a,b,r;
	printf("Enter two integer: ");
	scanf("%d %d",&a,&b);
	while(b)//while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("gcd = %d",a);
	return 0;
}
