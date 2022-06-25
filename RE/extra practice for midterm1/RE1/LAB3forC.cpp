#include <stdio.h>
int main(){
	int n,k;
	long long sum=1;
	scanf("%d%d",&n,&k);
	for(int i=1;i<=((k>n/2)?n-k:k);i++){
		sum=sum*(n-i+1)/i;
	}
	printf("C(%d,%d)=%lld\n",n,k,sum);
	return 0;
}
