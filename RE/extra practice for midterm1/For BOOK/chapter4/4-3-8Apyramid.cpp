#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<16;i+=2){
		for(j=7-(i-1)/2;j>0;j--)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
