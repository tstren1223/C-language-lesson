#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define N 10
#define SEED 654321
double uni_rand_1(){
	int x;
	int RANGE=100000;
	int RAND_INV_RANGE = ((int)((RAND_MAX)*(RAND_MAX+1)+RAND_MAX/RANGE));
	
	do{
		x=rand()*(RAND_MAX+1)+rand();
	}while(x>=RANGE*RAND_INV_RANGE);
	
	//printf("%d",x);
	
	
	x%=RANGE;
	printf("%d\n",x);
	return ((double)(x)/10000);
}

int main(){
	srand(SEED);
	for(int i=1;i<=N;i++){
		printf("%lf\n",uni_rand_1());
		
	}
	return 0;
}
