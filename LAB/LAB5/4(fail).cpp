#include <stdio.h>
int main(){
	int n,c=0,j,k,p;
	printf("Input n = ");
	while(scanf("%d", &n)){
		for(int i=n;i>0;i-=2){
			for(j=1;j<=i/2;j++)
				printf(" ");
			for(k=0;k<(n+1)/2-j+1;k++){
				printf("%-2c",65+k);
			}
			//for(p=k-1;p>c;p--){
			//	printf("%-2c",64+p);
			//}
			printf("\n");
			c++;
		}
	}
	return 0;
}
