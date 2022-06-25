#include <stdio.h>
#include <conio2.h>
int IsPrime(int);
double EvalPoly(float,float,float,float);
void cd(int);
int main(){
	int l;
	printf("a)\n");
	scanf("%d",&l);
	printf("The result is %d\nb)\n",IsPrime(l));
	float a,b,c,x;
	scanf("%f %f %f %f",&a,&b,&c,&x);
	printf("The result is %lf\nc)\n",EvalPoly(a,b,c,x));
	int y;
	scanf("%d",&y);
	cd(y);
	return 0;
}
int IsPrime(int x){
	int a=0;
	for(int i=2;i*i<=x;i++)
		x%i==0?a++:NULL;
	return a==0?1:0;
}
double EvalPoly(float a, float b, float c, float x){
	return a*x*x+b*x+c;
}
void cd(int y){
	int bg,flag,b=1;
	bg=(y+(y-1)/4-(y-1)/100+(y-1)/400)%7;
	(y%4==0&&y%100!=0)||y%400==0?flag=1:flag=0;
	for(int i=1;i<=12;i++){
		printf("\n<----------%d %02d---------->\n",y,i);
		printf(" Sun  Mon  Tue  Wed  Thu  Fri  Sat  \n ");
		(i==8)?b=1:NULL;
		if(b){
			for(int j=1;j<=31;j++){
				if(j==1){
					for(int k=0;k<bg;k++)
						printf("     ");
				}
				if(bg==6){
					printf(" ");
					textbackground(BLUE);
					printf("%2d",j);
					textbackground(BLACK);
					printf("  ");
				}
				else if(bg==0){
					printf(" ");
					textbackground(13);
					printf("%2d",j);
					textbackground(BLACK);
					printf("  ");
				}
				else
					printf("%2d   ",j);
				bg++;
				bg%=7;
				bg==0?printf("\n "):NULL;
			}
		}
		else if(i==2){
			for(int j=1;j<=(flag+28);j++){
				if(j==1){
					for(int k=0;k<bg;k++)
						printf("     ");
				}
				if(bg==6){
					printf(" ");
					textbackground(BLUE);
					printf("%2d",j);
					textbackground(BLACK);
					printf("  ");
				}
				else if(bg==0){
					printf(" ");
					textbackground(13);
					printf("%2d",j);
					textbackground(BLACK);
					printf("  ");
				}
				else
				printf("%2d   ",j);
				bg++;
				bg%=7;
				bg==0?printf("\n "):NULL;
			}
			
		}
		else{
			for(int j=1;j<=30;j++){
				if(j==1){
					for(int k=0;k<bg;k++)
						printf("     ");
				}
				if(bg==6){
					printf(" ");
					textbackground(BLUE);
					printf("%2d",j);
					textbackground(BLACK);
					printf("  ");
				}
				else if(bg==0){
					printf(" ");
					textbackground(13);
					printf("%2d",j);
					textbackground(BLACK);
					printf("  ");
				}
				else
				printf("%2d   ",j);
				bg++;
				bg%=7;
				bg==0?printf("\n "):NULL;
			}
		}
		b==1?b=0:b=1;
	}
}
