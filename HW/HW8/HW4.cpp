#include <stdio.h>
void cd(int);
int main(){
	int y;
	printf("Please input a year!\n");
	scanf("%d",&y);
	cd(y);
	return 0;
}
void cd(int y){
	int bg,flag,b=1;
	bg=(y+(y-1)/4-(y-1)/100+(y-1)/400)%7;
	(y%4==0&&y%100!=0)||y%400==0?flag=1:flag=0;
	for(int i=1;i<=12;i++){
		printf("\n%d\n",i);
		printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat  \n");
		(i==8)?b=1:NULL;
		if(b){
			for(int j=1;j<=31;j++){
				if(j==1){
					for(int k=0;k<bg;k++)
						printf("     ");
				}
				printf("%-2d   ",j);
				bg++;
				bg%=7;
				bg==0?printf("\n"):NULL;
			}
		}
		else if(i==2){
			for(int j=1;j<=(flag+28);j++){
				if(j==1){
					for(int k=0;k<bg;k++)
						printf("     ");
				}
				printf("%-2d   ",j);
				bg++;
				bg%=7;
				bg==0?printf("\n"):NULL;
			}
			
		}
		else{
			for(int j=1;j<=30;j++){
				if(j==1){
					for(int k=0;k<bg;k++)
						printf("     ");
				}
				printf("%-2d   ",j);
				bg++;
				bg%=7;
				bg==0?printf("\n"):NULL;
			}
		}
		b==1?b=0:b=1;
	}
}
