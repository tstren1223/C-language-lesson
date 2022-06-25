#include<stdio.h>
int gcd(int a,int b){
	if (b==0)
		return a;
	else 
		return gcd(b,a%b);
}
int main(){
	int x,y,z;
	printf("Enter two integers: ");
	scanf("%d %d",&x,&y);
	z=gcd(x,y);
	printf("gcd(%d,%d) = %d\n",x,y,z);
	printf("lcm(%d,%d) = %d\n",x,y,x*y/z);
	return 0;
}
