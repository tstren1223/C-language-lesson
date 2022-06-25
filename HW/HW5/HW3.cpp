#include <stdio.h>
int main(){
	int x,k=1,i=30;
	
	scanf("%d",&x);
	
	while(i>=0){
		printf("%d",(x>>i)%2);
		i--;
	}
	return 0;
}
