#include<stdio.h>
int main(){
	int m,s=0,l=0;
	printf("Please enter your dollars:");
	scanf("%d",&m);
	s=m;
	l=m;
	while(l>=7){
		s+=l/7;
		l=l%7+l/7;
		//printf("now money:%d\n now coupon:%d\n",s,l);
	}
	printf("your total chocolate bars:%d\nyour leftover coupon:%d\n",s,l);
	return 0;
} 
 
