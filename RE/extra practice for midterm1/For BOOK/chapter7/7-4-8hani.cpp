#include<stdio.h>
void hani(int n,char from ,char to ,char aux){
	if(n==1){
		printf("Move 1 form %c to %c\n",from ,to);
	}
	else {
		hani(n-1,from,aux,to);
		printf("Move %d form %c to %c\n",n,from,to);
		hani(n-1,aux,to,from);
	}
}
int main(){
	int n;
	char from ,to, aux;
	printf("Please input n,from,to,aux!\n");
	scanf("%d %c %c %c",&n,&from,&to,&aux);
	hani(n,from,to,aux);
	return 0;
}
