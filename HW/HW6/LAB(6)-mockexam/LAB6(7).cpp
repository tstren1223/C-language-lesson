#include <stdio.h>
int main(){
	int space1,space2,x;
	char lit=64;
	while(scanf("%d",&x)){
		//printf("x=%d\n",x);
		for(int i=0;i<2*x-1;i++){
			for(space1=(i<x)?2*(x-i-1):2*(i-x+1);space1>0;space1--)
				printf(" ");
			if(i==0||i==2*x-2)
				printf("%c\n",lit+x);
			else if(i<x){
				printf("%c",lit+x-i);
				for(space2=3+4*(i-1);space2>0;space2--)
					printf(" ");
				printf("%c\n",lit+x-i);
			}
			else if(i>=x){
				printf("%c",lit+i-x+2);
				for(space2=2*2*(x-1)-1-4*(i-x+1);space2>0;space2--)
					printf(" ");
				printf("%c\n",lit+i-x+2);
			}
		}
	}
	return 0;
}
