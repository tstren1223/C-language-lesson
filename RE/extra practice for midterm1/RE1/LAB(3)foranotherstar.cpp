#include <stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			printf((i<n/2)?((j>n/2-i&&j<n/2+i)?" ":"*"):((j>i-n/2&&j<n*3/2-i-1))?" ":"*");
		printf("\n");
	}
	return 0;
}
