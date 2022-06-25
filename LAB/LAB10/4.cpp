#include<stdio.h>
#include<stdlib.h>
#include <conio2.h>
#define MAX 5 // define the max recursions, try different numbers!
void drawRect(int x1, int y1, int x2, int y2)
{ 
	textbackground(WHITE);
	int x,y;
	for (x=x1;x<=x2;x++)
	for (y=y1;y<=y2;y++)
	{
	gotoxy(x,y);
	printf(" ");
	}
	_sleep(100);
}
void drawSierpinski(int n, int x1, int y1, int x2, int y2)
{ //draw the white rectangle
	drawRect((x1+x2)/2,y1,x2-1,(y1+y2)/2-1);
	//getch();
	if (n < MAX)
	{//Something missed here…
	drawSierpinski(n+1, x1, y1, (x1+x2)/2, (y1+y2)/2);//左上的右上 
	drawSierpinski(n+1,  x1, (y1+y2)/2, (x1+x2)/2, y2);//左下的右上 
	drawSierpinski(n+1, (x1+x2)/2,(y1+y2)/2, x2, y2);//右下的右上 
	}
}
void robot(int, int, int, int *);
int main()
{
	int n, meter[100];
	printf("-------------\n     part1     \n-------------\nn = ");
	while(scanf("%d", &n)!=EOF){
		robot(0, n, 0, meter);
		printf("\nn = ");
	}
	textbackground(0);
	clrscr();
	drawSierpinski(1,1,1,120,30); // try different sizes!
	return 0;
}
void robot(int dis, int n, int index, int *ind)
{
	for(int i = 1; i <= 2; i++)
	{
		if(dis + i < n)
		{
			ind[index] = i;
			robot(dis+i, n, index+1, ind);
		}
		else if((dis + i) == n)
		{
			ind[index] = i;
			for(int j = 0; j <= index ; j++)
				printf("%d", ind[j]);
			printf("\n");
		}
	}
}
