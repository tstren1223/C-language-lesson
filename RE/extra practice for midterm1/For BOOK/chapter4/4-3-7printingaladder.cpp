#include<stdio.h>
int main(){
	int i,j,k;
	for(i=1;i<9;i++){
		for(j=9-i;j>0;j--)
			printf(" ");
		for(k=1;k<=i;k++)
			printf("%c",'*');
		printf("\n");
	}
	return 0;
}
