#include<stdio.h>
int main()
{
	int x, y, carry, sum=0;
	
	printf("Input: ");
	scanf("%d%d", &x, &y);
	printf("%d + %d = ", x, y);
	sum |= (x&1)^(y&1);
	carry = (x&1)&(y&1);
	x>>=1; y>>=1;
	
	
	sum=sum|(((x&1)^(y&1))^(carry&1))<<1;
	carry=  (x&1)&(y&1)|(x&1)&(carry&1)|(y&1)&(carry&1);
	x>>=1; y>>=1;
	
	sum=sum|(((x&1)^(y&1))^(carry&1))<<2;
	carry=  (x&1)&(y&1)|(x&1)&(carry&1)|(y&1)&(carry&1);
	x>>=1; y>>=1;

	
	printf("%d",sum+(carry<<3));
	return 0;
}
