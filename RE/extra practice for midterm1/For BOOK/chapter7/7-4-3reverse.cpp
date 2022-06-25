#include<stdio.h>
void reverse_digit(int n){
/*
	if(n<0)
		return;
	while(n!=0){
		printf("%d",n%10);
		n/=10;
	}
	printf("\n");
*/	if(n){
		printf("%d",n%10);
		reverse_digit(n/10);
	}
}
int main(){
	int x;
	printf("Enter a 4-digit number:");
	scanf("%d",&x);
	reverse_digit(x);
	return 0;
}
