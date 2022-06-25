#include<stdio.h>
#include<stdlib.h>
int main(){
	system("chcp 437 && cls");
	printf(" 0x |");
	for(int i=0;i<=0xF;i++)
		printf("%3x",i);
	printf("\n-----");
	for(int i=0;i<=0xF;i++)
		printf("---");
		
	printf("\n");
	for(int i=0x20;i<=0xFF;i++){
		printf((i%16==0)?"%3x |":"",i/16);
		printf("%3c",(char)(i));
		printf((i%16==15)?"\n":"");
	}
	return 0;
}
