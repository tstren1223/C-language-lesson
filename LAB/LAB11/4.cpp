#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include<windows.h>
#include<math.h>
#include<time.h>
#define M 100
#define N 25
void shift(char **a){
	for(int i=0;i<M-1;i++){
		for(int j=0;j<N;j++)
				a[i][j]=a[i+1][j];
	}
}
void show(char **a){
	for(int y=N-1;y>=0;y--){
		printf("|");
	for(int x=0;x<M;x++)
		printf("%c", a[x][y]);
	printf("|");
	printf("\n");
	}
}
int main(){
	char **w1, **w2;
	double f, ratio;
	int menu, in, ymax=1, ymin=-1;
	printf("please input frequency f:");
	scanf("%lf", &f);
//initialize array w1 and w2
//something missed here
	w1=NULL;
	w2=NULL;
	w1=new char*[M];
	for(int i=0;i<M;i++)
		w1[i]=new char[N];
	w2=new char*[M];
	for(int i=0;i<M;i++)
		w2[i]=new char[N];
//allocate space and * to your array
//something missed here
		
		//ratio=(sin((2*M_PI*f*i/100))-ymin)/(ymax-ymin)
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++){
			in=ceil(24*(sin((2*M_PI*f*i/100))-ymin)/(ymax-ymin));
			if(j==in)
				w1[i][j]='*';
			else
				w1[i][j]=' ';
		}
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++){
			in=ceil(24*(cos((2*M_PI*f*i/100))-ymin)/(ymax-ymin));
			if(j==in)
				w2[i][j]='*';
			else
				w2[i][j]=' ';
		}
	int time=0;
	printf("1:sin\n2:cos\n:");
	scanf("%d", &menu);
	while(1){
		switch(menu){
			time=99;
			case 1:
				shift(w1);
				time++;
				in=ceil(24*(sin((2*M_PI*f*time/100))-ymin)/(ymax-ymin));
				for(int j=0;j<N;j++){
					if(j==in)
						w1[M-1][j]='*';
					else
						w1[M-1][j]=' ';
				}
				show(w1);
				break;
			case 2:
				shift(w2);
				time++;
				in=ceil(24*(cos((2*M_PI*f*time/100))-ymin)/(ymax-ymin));
				for(int j=0;j<N;j++){
					if(j==in)
						w2[M-1][j]='*';
					else
						w2[M-1][j]=' ';
				}
				show(w2);
				break;
		}
		_sleep(200);
		system("cls");
	}
}
