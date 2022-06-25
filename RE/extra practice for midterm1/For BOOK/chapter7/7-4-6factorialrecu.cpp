#include<stdio.h>
int comb(int n,int k){
	if((n==k)||(k==0))
		return 1;
	else
		return (comb(n-1,k)+comb(n-1,k-1));
}
int main(){
	int n,k;
	do{
		printf("Enter n,k(n>=k;n,k>=0): ");
		scanf("%d %d",&n,&k);
	}while((n<k)||(k<0)||(n<0));
	printf("C(%d,%d) = %d\n",n,k,comb(n,k));
	return 0;
}
