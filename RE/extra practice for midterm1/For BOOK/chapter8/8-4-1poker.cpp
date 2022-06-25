#include<stdio.h>
#include<stdlib.h>
int main(){
	char c[4][5]={"黑桃","愛心","方塊","梅花"};
	char d[13][3] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<13;j++)
			printf("%s %-3s",c[i],d[j]);
		printf("\n");
	}
	system("PAUSE");
	return 0;
}
