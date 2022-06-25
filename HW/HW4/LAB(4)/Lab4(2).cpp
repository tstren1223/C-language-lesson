#include<stdio.h>
int main(){
	int f1=1,f2=1,f3=0;
	printf("f1=%d\nf2=%d\n",f1,f2);
	for(int i=3;f3<=1000;i++){
		(i%2==1)?f3=f2+f1,printf("f%d=%d\n",i,f3),f1=f3,f3+=f2:printf("f%d=%d\n",i,f3),f2=f3;
	}
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
