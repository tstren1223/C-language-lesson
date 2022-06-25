#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int range=10001, x;
	int bound=(RAND_MAX+1)/range;
	for(int i=1;i<=100;i++){
	do{
		x=rand();
	}while(x>=bound*range);
	printf("%.5lf    ",x%range/2/1000.0);
	i%10==0?printf("\n"):NULL;
	}
	
	
	return 0;
}
