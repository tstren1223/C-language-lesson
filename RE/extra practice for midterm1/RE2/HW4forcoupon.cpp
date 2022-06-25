#include <stdio.h>
#include<conio.h>
int main(){
	int dollar;
	int coupon,sumcho=0;
	
	printf("Input number of dollars: ");
	scanf("%d",&dollar);
	
	coupon=dollar;
	sumcho=dollar;

	while(coupon>=7){
		sumcho+=coupon/7;
		coupon= coupon/7+coupon%7;
	}
	
	printf("Chocolate u can eat: %d\n",sumcho);
	printf("leftover coupons: %d\n",coupon);
	
	return 0;
}
