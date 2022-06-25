#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(){
	printf("-----Part(a)-----\n");
	int x1[7]={0};
	int cho,cou=0;
	srand(time(NULL));
	for(int i =1;i<=100;i++){
		cho=(int)(rand()/(RAND_MAX+1.0)*6)+1;
		x1[cho]++;
	}
	for(int i=1;i<=6;i++){
		printf("%d.:",i);
		for(int j=1;j<=x1[i];j++){
			printf("*");
			cou++;
		}
		printf("\n");
	}
	printf("\n\n-----Part(b)------\n");
	int x[]={72,23,38,86,62,29,99,96,67,78,87,76,65,58,86,69,93,34,45,55,52,7,74,48,83,39,90,18,82,26,65,53,39,96,66};
	int sum=0,above=0,below=0;
	int y[10]={0};
	double avg;
	
	for(int i=0;i<35;i++){
		sum+=x[i];
		switch(x[i]/10){
			case 0:
				y[0]++;
				break;
			case 1:
				y[1]++;
				break;
			case 2:
				y[2]++;
				break;
			case 3:
				y[3]++;
				break;
			case 4:
				y[4]++;
				break;
			case 5:
				y[5]++;
				break;
			case 6:
				y[6]++;
				break;
			case 7:
				y[7]++;
				break;
			case 8:
				y[8]++;
				break;
			case 9 ... 10:
				y[9]++;
				break;
		}
	}
	avg=sum/35.0;
	for(int i=0;i<35;i++){
		x[i]>=avg?above++:below++;
	}
	printf("*****SCORE REPORT*****\nMEAN = %lf\nABOVE MEAN = %d\nBELOW MEAN = %d\n",avg,above,below);
	for(int i=0;i<10;i++){
		switch(i){
			case 0:
				printf("0  ~    9:  ");
				break;
				
			case 1:
				printf("10 ~   19:  ");
				break;
				
			case 2:
				printf("20 ~   29:  ");
				break;
				
			case 3:
				printf("30 ~   39:  ");
				break;
				
			case 4:
				printf("40 ~   49:  ");
				break;
				
			case 5:
				printf("50 ~   59:  ");
				break;
				
			case 6:
				printf("60 ~   69:  ");
				break;
				
			case 7:
				printf("70 ~   79:  ");
				break;
				
			case 8:
				printf("80 ~   89:  ");
				break;
				
			case 9:
				printf("90 ~  100:  ");
				break;
		}
		for(int j=1;j<=y[i];j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
