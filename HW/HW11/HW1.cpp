#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(){
	int x[7]={0};
	int cho,cou=0;
	srand(time(NULL));
	for(int i =1;i<=100;i++){
		cho=(int)(rand()/(RAND_MAX+1.0)*6)+1;
		x[cho]++;
	}
	for(int i=1;i<=6;i++){
		printf("%d.:",i);
		for(int j=1;j<=x[i];j++){
			printf("*");
			cou++;
		}
		printf("\n");
	}
	return 0;
}
