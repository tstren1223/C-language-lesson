#include <stdio.h>

int main(){
	int x=1,sum,max=0;
	
	
	while (x!=0){
		scanf("%d",&x);
		sum+=x;
		sum<=0?sum=0:sum>=max?max=sum:NULL;
		
	}
	
	printf("%d",max);
	
	return 0;
}
