#include<stdio.h>
#include<stdlib.h>
#define n 100
int main(){
	int c[6]={0};
	unsigned int s;
	int num,i;
	printf("Enter 0-65535 for seed: ");
	scanf("%d",&s);
	srand(s);
	for(i=1 ;i<=n;i++){
	num = rand()%6;
	c[num]++;
	}	
	for(i=0;i<6;i++)
		printf("%d ==>%3d times",i+1,c[i]);
	 
	return 0;
}
