#include <stdio.h>
int main(){
	int x,k;
	char lt=64;
	while(scanf("%d",&x)){
		for(int i=0;i<2*x-1;i++){
			k=(i<x)?2*i-1:2*(x-1)-1-2*(i-x+1);
			//if(i==0||i==2*x-1)
			for(int j=1;j<=2*x-1;j++){
				
				if(j>0&&j<=((i<x)?x-i:i-x+2))
					printf("%-2c",lt+j);
				else if(j>((i<x)?x-i:i-x+2)&&j<=((i<x)?x-i+k:i-x+2+k))
					printf("  ");
				else if(j>((i<x)?x-i+k:i-x+k+2)){
					printf("%-2c",lt+j-2*(j-x));
				}
			/*for(int j=0;j<k;j++)
				printf("  ");
			for(int j=x-i;j>0;j--)
				printf("%-2c",lt+j);
			printf("\n");*/
		}
		printf("\n");
		}
	}
	return 0;
}
