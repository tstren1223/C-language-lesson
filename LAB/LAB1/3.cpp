#include<stdio.h>
int main(){
	int b;
	scanf("%d",&b);
	printf("input:%d\n",b);
	printf("Onput:%d%d%d%d%d%d%d",b/2/2/2/2/2/2%2,b/2/2/2/2/2%2,b/2/2/2/2%2,b/2/2/2%2,b/2/2%2,b/2%2,b%2);
	return 0;
}
