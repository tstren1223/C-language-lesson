#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
	int l,cho,max,min;
	srand(time(NULL));
	for(int i=1;i<=10000;i++){
	cho=(int)(rand()/(RAND_MAX+1.0)*(2));
	if(cho==0){
		l=(rand() * (RAND_MAX + 1) + rand())|(((int)(rand()/(RAND_MAX+1.0)*2))<<30);
	}
	else
	{
		l=-((rand() * (RAND_MAX + 1) +rand())|(((int)(rand()/(RAND_MAX+1.0)*2))<<30))-1;
	}
	printf("%d   ",l);
	i==1?max=l:NULL;
	i==2?min=l:NULL;
	i%5==0?printf("\n"):NULL;
	l>max?max=l:NULL;
	l<min?min=l:NULL;
	}
	//printf("%d %d",-RAND_MAX * (RAND_MAX + 1) - RAND_MAX-RAND_MAX * (RAND_MAX + 1) - RAND_MAX-2,RAND_MAX * (RAND_MAX + 1) + RAND_MAX);
	printf("\nmax:%d   min:%d",max,min);
	return 0;
}
