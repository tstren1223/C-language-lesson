#include<stdio.h>
int main (){
	long long x,s1=0,s2=0;
	printf("Please enter an 8 digits integer:");
	scanf("%lld",&x);
	for(int i=1,b=10;i<=4;i++){
		s1+=x%(b)/(b/10);
		b*=100;
		//printf("%lld\n",s1);
	}
	//printf("s1=%lld\n",s1);
	for(int i=1,b=100;i<=4;i++){
		s2+=x%(b)/(b/10);
		b*=100;
		//printf("%lld\n",s2);
	}
	//printf("s2=%lld\n",s2);
	s1*=2;
	//printf("%lld\n",s1);
	s2+=s1;
	//printf("%lld\n",s2);
	s2-=1;
	//printf("%lld\n",s2);
	s2%=10;
	//printf("%lld\n",s2);
	s2-=9;
	printf("%lld\n",s2);
	return 0;
}
