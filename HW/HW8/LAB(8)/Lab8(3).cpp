#include <stdio.h>
#include <conio2.h>
int bg,flag,b;
int Date2Day(int y,int m,int d);
void printDay(int day);
void printCalander(int y,int m,int d);
int main(){
	int y,m,d,day;
	while(scanf("%d %d %d",&y,&m,&d)){
		day=Date2Day(y,m,d);
		printDay(day);
		printCalander(y,m,d);
	}
	return 0;
}
int Date2Day(int y,int m,int d){
	b=1;
	bg=(y+(y-1)/4-(y-1)/100+(y-1)/400)%7;
	(y%4==0&&y%100!=0)||y%400==0?flag=1:flag=0;
	for(int i=1;i<m;i++){
		i==8?b=1:NULL;
		if(b){
			bg=(bg+31)%7;
			b=0;
		}
		else if(i==2){
			flag?bg=(bg+29)%7:bg=(bg+28)%7;
			b=1;
		}
		else{
			bg=(bg+30)%7;
			b=1;
		}
		}
	return (bg+d-1)%7;
	}
void printDay(int day){
	switch(day){
			case 0:
				printf("Sunday");
				break;
			case 1:
				printf("Monday");
				break;
			case 2:
				printf("Tuesday");
				break;
			case 3:
				printf("Wednesday");
				break;
			case 4:
				printf("Thursday");
				break;
			case 5:
				printf("Friday");
				break;
			case 6:
				printf("Saturday");
				break;
			
		};
}
void printCalander(int y,int m,int d){
	printf("\n SU MO TU WE TH FR SA\n ");
	for(int i=0;i<bg;i++){
		printf("   ");
	}
	for(int i=1;i<=((m==2)?28+flag:b?31:30);i++){
		if(i==d){
			textattr((RED << 4) + BLUE);
			printf("%2d ",i);
			textattr((BLACK << 4) + WHITE);
		}
		else if(bg==0||bg==6){
			textattr((BROWN << 4) + LIGHTGREEN);
			printf("%2d ",i);
			textattr((BLACK << 4) + WHITE);
		}
		else
			printf("%2d ",i);
		bg=(bg+1)%7;
		bg?NULL:printf("\n ");
	}
	printf("\n----------------------\n");
}

