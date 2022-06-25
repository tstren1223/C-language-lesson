#include <stdio.h>
#include <stdlib.h>
#include <cmath>
int main(){
	long long n1,n2,n3,temp1,temp2,gcd,lcm;
	while(scanf("%lld %lld %lld",&n1,&n2,&n3)){
		temp1=n1,temp2=n2;
		while((temp1%=temp2)&&(temp2%=temp1));//for gcd
		gcd=temp1+temp2;//one of these numbers will be 0
		lcm=n1*n2/gcd;//a way to get lcm between two numbers
		temp1=lcm,temp2=n3;
		while((temp1%=temp2)&&(temp2%=temp1));//for another gcd
		gcd=temp1+temp2;//one is 0
		lcm=lcm*n3/gcd;//lud for three is lcd for lcd of two and another number 
		printf("LCM = %lld\n",lcm);
	}
	return 0;
}
