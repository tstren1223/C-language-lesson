#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
int main() {  
	int sed;
	printf("seed:");
	scanf("%d",&sed);
	srand(sed);  
	int range=10000, x;  
	int bound=(RAND_MAX+1)/range;
	for(int i=1;i<=1000;i++){
		do{   
			x=rand();  
		}while(x>=bound*range);  
		printf("%.3lf   ",x%range/1000.0);
		i%10==0?printf("\n"):NULL;  
	} 
	return 0; 
	} 
