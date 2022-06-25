#include <stdio.h>
#include <stdlib.h> 
int main(){
	int n;
	scanf("%d",&n);
	int star=2,white=n/2;
	for(int i=0;i<n;i++){
		for(int j=0;j<white;j++){
			printf(" ");
		}
		for(int j=0;j<star;j++)
			printf("*");
		puts("");
		(i<n/2)?(n%2==0&&i==n/2-1)?NULL:star+=2:star-=2;
		(i<n/2)?(n%2==0&&i==n/2-1)?NULL:white--:white++;
		
	}
	
	return 0;
}
