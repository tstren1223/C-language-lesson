#include<stdio.h>
#include<stdlib.h>
int main(){
	printf("Input:");
	int a;
	scanf("%d",&a);
	for(int i=1; i<=a;i++){
		for(int b=1;b<=a;b++){
			abs(b-(a+1)/2)<abs(abs((i-(a+1)/2))-(a-1)/2)?printf(" "):printf("*");
		}
		printf("\n");
	}
	return 0;
}
