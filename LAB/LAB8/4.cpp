#include<stdio.h>
bool isBaseB(long long input, int B);
long long B2dec(long long num,int B);
int main(){
	long long input;
	int B;
	printf("Num = ");
	while(scanf("%lld",&input)){
		printf("Base = ");
		scanf("%d",&B);
		if(isBaseB(input,B)){
			printf("(%lld)_%d = (%lld)_10\nNum =",input,B,B2dec(input,B));
		}
		else
			printf("%lld is not %d base\nNum= ",input,B);
	}
	return 0;
}
bool isBaseB(long long input, int B){
	while(input){
		if(input%10>=B)
			return 0;
		input/=10;
	}
	return 1;
}
long long B2dec(long long num,int B){
	long long sum=0,base=1;
	while(num){
		sum+=num%10*base;
		base*=B;
		num/=10;
		//printf("%lld\n",sum);
	}
	return sum;
}
