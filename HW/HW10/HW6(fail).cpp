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
	int ca=1,num;
	int x[100][60][2];
	int i=0,flag=1;
	while(flag){
		scanf("%d",&num);
		for(int l=0;l<num;l++){
			scanf("%d",&x[i][l][0]);
		}
		for(int l=1;l<=num;l++){
			scanf("%d",&x[i][l][1]);
		}
		i++;
		(num==0)?flag=0:NULL;
	}
	for(int l=0;l<i;l++){
		
	}
	char from ,to, aux;
	printf("Please input n,from,to,aux!\n");
	scanf("%d %c %c %c",&n,&from,&to,&aux);
	hani(n,from,to,aux);
	return 0;
}
