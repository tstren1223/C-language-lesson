#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(double i=1,b=1,c=1;i<=n;i++,b=1,c=1){
		for(int j=3*(n-i);j>0;j--){
			printf(" ");
		}
	for(int k=1;k<=i;k++)
	printf("1      ");
	printf("\n");
	for(int j=3*(n-i);j>0;j--){
			printf(" ");
		}
	for(int k=1;k<=i;k++)
	printf("-      ");
	printf("\n");
	for(int j=3*(n-i);j>0;j--){
			printf(" ");
		}
	printf("%-7.0lf",i);
	for(int j=1,k=i-1;j<i;j++,k--){
		b*=k;
		c*=j;
		printf("%-7.0lf",i*b/c);
	}
	printf("\n");	
	}
	return 0;
}
