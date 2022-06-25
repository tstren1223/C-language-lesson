#include <stdio.h>
#include <math.h>
int main(){
	int fl=1;
	int n;
	char x[13]={'A','T','C','G','C','A','T','G','C','G','T','A','G'};
	char y[13]={'T','A','G','C','G','T','A','C','G','C','A','T','C'};
	printf("Please input your specified length!\n");
	scanf("%d",&n);
	for(int i=0;i<14-n;i++){
		fl=1;
		for(int j=0;j<n;j++){
			if(x[i+j]!=y[i+n-1-j]){
				fl=0;
				printf("%c\n%c\n%d\n",x[j],y[i+n-1-j],i+n-1-j);
				break;
			}
		}
		if(fl){
			for(int j=i;j<i+n;j++){
				printf("%c",x[j]);
			}
			
			printf("\n");
			for(int j=i;j<i+n;j++){
				printf("%c",y[j]);
			}
			printf("\n\n\n");
		}
	}
	
	return 0;
}
