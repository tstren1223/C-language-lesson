#include<stdio.h>
int main(){
	int x[3]{3,,5};//not compiler passing 
	for(int i=0;i<=2;i++)
		printf("%d\n",x[i]);
	return 0;
}
