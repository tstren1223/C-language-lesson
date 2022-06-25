#include<stdio.h>
#include <conio2.h> 
#include <stdlib.h> 
#define MAX 4 // define the max recursions, try different numbers! 
void robot(int, int, int, int *);
void drawRect(int x1, int y1, int x2, int y2)  
{    int x, y;  
    // שÝ 
    gotoxy(x1,y1); 
    printf("%c ", 1);  
    //שש 
	for (x=x1+1; x<x2; x++) 
    	printf("%c", 6);   
    //שß 
    gotoxy(x2,y1); 
    printf("%c", 2);      
    //שר 
    for (y=y1+1; y<y2; y++) { 
    	gotoxy(x1,y); 
    	printf("%c", 5);    
    	gotoxy(x2,y); 
    	printf("%c", 5);    
    }  
//שד  
    gotoxy(x1,y2); 
    printf("%c ", 3);  
     //שש 
    for (x=x1+1; x<x2; x++) 
    	printf("%c", 6);    
     //שו 
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
