#include<stdio.h>
int main (){
	printf("Here's an ASCII code chart.\n\t¢x¢x"); 
	for(int i=32;i<=127;++i){
		printf("\t%d \t¢x\t%c \t¢x",i,i);
		if(i!=0&&i%2==1){
			printf("¢x\n\t¢x¢x");
		}
	}
	return 0;
}
