#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0,b=1,c=1;i<n;i++,b=1,c=1){
		for(int j=2*(n-i);j>0;j--){
			printf(" ");
		}
	printf("1   ");
	for(int j=1,k=i;j<=i;j++,k--){
		b*=k;
		c*=j;
		printf("%-4d",b/c);
	}
	printf("\n");	
	}
	return 0;
}
