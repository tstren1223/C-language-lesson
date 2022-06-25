#include <stdio.h>
#include <conio.h>
int main(){
	int k,x;
	while(scanf("%d",&x)){
	for(int i=1;i<2*x;i++){
		char ch=64;
		i>x?k=2*x-i:k=i;
		for(int j=1;j<2*x;j++){
			if(j<=x-k)
				printf(" ");
			else if(j<x+k){
				(j<=x)?ch++:ch--;
				printf("%c",ch);
			}
			else
				printf(" ");
		}
		printf("\n");//getch();
	}
	}
	return 0;
}
