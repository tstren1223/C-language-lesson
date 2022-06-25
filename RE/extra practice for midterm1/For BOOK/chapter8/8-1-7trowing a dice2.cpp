#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int mark[6]={0};
	int num,i,t=0,c=0;
	srand(time(NULL));
	do{
		num=rand()%6;
		t++;
		if(mark[num]==0){
			mark[num]=1;
			c++;
		}
	}while(c<6);
	printf("Total toss %d times\n",t);
	return 0;
}
