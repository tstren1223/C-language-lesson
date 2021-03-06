#include<stdio.h>
#include <conio2.h> 
#include <stdlib.h> 
#define MAX 4 // define the max recursions, try different numbers! 
void robot(int, int, int, int *);
void drawRect(int x1, int y1, int x2, int y2)  
{    int x, y;  
    // ?? 
    gotoxy(x1,y1); 
    printf("%c ", 1);  
    //?? 
	for (x=x1+1; x<x2; x++) 
    	printf("%c", 6);   
    //?? 
    gotoxy(x2,y1); 
    printf("%c", 2);      
    //?? 
    for (y=y1+1; y<y2; y++) { 
    	gotoxy(x1,y); 
    	printf("%c", 5);    
    	gotoxy(x2,y); 
    	printf("%c", 5);    
    }  
//??  
    gotoxy(x1,y2); 
    printf("%c ", 3);  
     //?? 
    for (x=x1+1; x<x2; x++) 
    	printf("%c", 6);    
     //?? 
    gotoxy(x2,y2); 
    printf("%c", 4); 
}
void drawSquares(int n, int x1, int y1, int x2, int y2) 
{     //draw the rectangle 
	drawRect( int((x2-x1)/4.+x1+0.5), int((y2-y1)/4+y1+0.5), int((x2-x1)*3/4+x1+0.5), int((y2-y1)*3/4+y1+0.5)); 
    	if (n < MAX) 
    	{/*
			drawSquares(n+1,int(x1), int(y1), int((x2-x1)/2), int((y2-y1)/2));
			drawSquares(n+1,int(x1), int((y2-y1)/2), int((x2-x1)/2), int(y2));
			drawSquares(n+1,int((x2-x1)/2), int(y1), int(x2), int((y2-y1)/2));
			drawSquares(n+1,int((x2-x1)/2), int((y2-y1)/2), int(x2), int(y2));*/
			textcolor(LIGHTRED);
			//textbackground(RED);
			drawSquares(n+1,x1,y1,(x1+x2)/2,(y1+y2)/2);//1/4 3/4 1/8 3/8.....--->x變短y變短範圍則往某方向移動!y2縮小x2縮小即往左上 
			getch();
			textcolor(LIGHTBLUE);
			//textbackground(BLUE);
			drawSquares(n+1,x1,(y1+y2)/2,(x1+x2)/2,y2);//y1變大,x2縮小即往左下 
			getch();
			textcolor(LIGHTGREEN);
			//textbackground(GREEN);
			drawSquares(n+1,(x1+x2)/2,(y1+y2)/2,x2,y2);//x1變大,y1變大即往右下 
			getch();
			textcolor(LIGHTCYAN);
			//textbackground(CYAN);
			drawSquares(n+1,(x1+x2)/2,y1,x2,(y1+y2)/2);//X1變大,y2變小即往右上 
			getch();
    	} 
} 
int main()
{
	int n, meter[100];
	printf("-------------\n     part1     \n-------------\nn = ");
	while(scanf("%d", &n)!=EOF){
		robot(0, n, 0, meter);
		printf("\nn = ");
	}
	system("chcp 950"); 
    textbackground(0); 
    clrscr(); 
    textcolor(WHITE); 
    drawSquares(1, 1, 1, 120, 30); 
    system("pause");
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
