#include <stdio.h>
int main(){
	int n,space,cha,i,j;
	char c=65;
	printf("input n: ");
	while(scanf("%d",&n)){
		
		space =n/2;
		cha=1;
		
		for(i=1;i<=n;i++){
		
			for(j=0;j<space;j++)
				printf(" ");
			for(j=0;j<cha;j++)
				printf("%2c",c+(j<cha/2?j:cha-j-1));
			printf("\n");
			
			space = i<n/2?n/2-i:i-n/2;
			cha=i<n/2?i+1:n-i;
		}
		printf("\ninput n: ");	
		}
		
	
	return 0;
}
