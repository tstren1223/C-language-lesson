#include<stdio.h>
int main(){
	int a;
	printf("Please input enter a legth of time in seconds:\n");
	scanf("%d",&a);
	int b,c,d;
	b=a/3600;
	c=(a%3600)/60;
	d=(a%3600)%60;
	printf("%d seconds=%d hours,%d minutes,%d seconds\n",a,b,c,d);
}
