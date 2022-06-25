#include<stdio.h>
int main(){
	int a,b,r,a2,b2;
	printf("Enter two integer values: ");
	scanf("%d %d",&a,&b);
	a2=a;
	b2=b;
	while(a!=b){
		while(a>b)
			a-=b;
		while(b>a)
			b-=a;
	}
	while((a2%=b2)&&(b2%=a2));//another usage for while to get gcd
	r=a2+b2;
	printf("gcd = %d\ngcd = %d\n",a,r);
	return 0;
}
