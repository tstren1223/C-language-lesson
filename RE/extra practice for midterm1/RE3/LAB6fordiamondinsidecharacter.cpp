#include <stdio.h>
#include <stdlib.h>
#include <cmath>
int main(){
	int m,n;
	char c;
	while(scanf("%d",&m)){
		printf("\n");
		n=2*m-1;
		c='A'+(m-1);
		//you can use Manhattan distance or Manhattan length for symmetry shape!
		
		for(int i=-n/2;i<=n/2;i++){
			for(int j=-n/2;j<=n/2;j++){
				if(abs(i)+abs(j)==m-1)
					printf("%c ",c-abs(j));
				else
					printf("  ");
			}
			printf("\n");
		}
		
	}
	return 0;
}
