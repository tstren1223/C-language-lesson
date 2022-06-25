#include<stdio.h>
#include<stdio.h>
#include<time.h>
int main(){
	register int j;
	long long t;
	t=time(NULL);
	for(int loop=0;loop<10000;loop++)
		for(int i=0;i<100000;i++)
			;
	printf("Time for non-register loop:%lld\n",time(NULL)-t);
	t=time(NULL);
	for(int loop=0;loop<10000;loop++)
		for(j=0;j<100000;j++)
			;
		
	printf("Time for register loop:%lld\n",time(NULL)-t);
	return 0;
}
