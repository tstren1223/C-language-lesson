#include <stdio.h>
int main(){
	int x,sum=0,term;
	int i,j;
	printf("Please input x: ");
	scanf("%d",&x);
	
	for(i=1; i<=x; i++){
		term =1;
		for(j=0;j<i;j++){
			term *= i;
		}
		sum+=term;	
	}
	printf("Ans = %d\n",sum);
	return 0;
}
