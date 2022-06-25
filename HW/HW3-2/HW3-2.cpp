#include<stdio.h>
int main (){
	int x;
	printf("Please enter an integer:");
	scanf("%d",&x);
	printf("%d is %d*50+%d*20+%d*10+%d*1",x,x/50,x%50/20,x%50%20/10,x%10);
	return 0;
}
