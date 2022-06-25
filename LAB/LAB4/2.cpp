#include<stdio.h>
int main(){
	double x,s=0,b=1;
	printf("----part(A)----\ninput integer x:");
	scanf("%lf",&x);
	for(int i=1;i<=x;i++,b=1){
		for(int j=1;j<=i;j++){
			b*=i;
			//printf("b=%lf j=%d\n",b,j);
		}
		s+=b;
		//printf("s=%lf\n",s);
		//printf("%d %d",)
	}
	printf("S1=%.0lf\n",s);
	s=0;
	for(int i=1,sign=1,b=x;i<=11;i+=2,sign*=-1)
	{
		s+=1./b*sign;
		b*=x*x;
	}
	printf("\nS2=%lf",s);
	int m,l,s1=0;
	printf("\n----part(B)----\nHow manny dollars do you have?");
	scanf("%d",&m);
	s1=m;
	l=m;
	while(l>=7){
		s1+=l/7;
		l=l%7+l/7;
		//printf("now money:%d\n now coupon:%d\n",s,l);
	}
	printf("\nyou can buy %d bars\n%d coupons remains\n",s1,l);
	return 0;
} 
