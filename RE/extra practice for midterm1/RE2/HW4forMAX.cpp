#include <stdio.h>
int main(){
	int max_end =0;
	int max_sofar=0;
	int num;
	while (scanf("%d",&num)!=EOF){
		max_end+num<0? max_end=0; max_end+=num;
		max_end>max_sofar ?max_sofar=max_end :NULL;
	}
	printf("Maximum:%d",max_sofar);
	return 0;
}
