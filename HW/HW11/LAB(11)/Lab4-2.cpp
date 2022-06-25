#include"maze.h"
#include<stdio.h>
#include<conio2.h>
#include<stdlib.h>

void showMap(int map[N][M],int road_color,int wall_color);
void p_move(int *x,int *y,int road_color,int p_color);
void g_trace(int path[],int depth,int g_x,int g_y,int p_x,int p_y,int *find);
void g_move(int next_dir,int *game,int *g_x,int *g_y,int p_x,int p_y,int g_color,int road_color);
int dir[4][2] = {{0,-1},{0,1},{-1,0},{1,0}};

int main(){
	int road_color = BLACK;
	int wall_color = WHITE;
	int ghost_color = YELLOW;
	int player_color = RED;
	
	int game = 1;
	int p_x=24,p_y=8;
	int path[1000]={0},g_x=36,g_y=22;
	
	showMap(map,road_color,wall_color);
	gotoxy(p_x*2+1,p_y+1);
	textattr(RED);
	printf("█");
	
	
	while(game){
		p_move(&p_x,&p_y,road_color,player_color);
		
		int find = 0;
		g_trace(path,0,g_x,g_y,p_x,p_y,&find); 
		//gotoxy(10,10);
		//for(int i=0;i<20;i++)
			//printf("%d",path[i]);
	//	system("PAUSE");
		g_move(path[0],&game,&g_x,&g_y,p_x,p_y,ghost_color,road_color);
		if(p_x==1&&p_y==1)
		{
			game = 0;
			clrscr();
			printf("YOU WIN");
		}
		_sleep(100);
	}
	gotoxy(0,N+1);
	return 0;
}

void showMap(int map[N][M],int road_color,int wall_color){
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<M;j++)
		{
			if(map[i][j])
			{
				textattr(road_color);
				printf("█");
			}
			else
			{
				textattr(wall_color);
				printf("█");
			}
		}
		printf("\n");
	}
}

void p_move(int *x,int *y,int road_color,int p_color){
	char key;
	while(kbhit())
	{
		key=getch();
		
		int p_dir;
		switch(key)
		{
			case 'w':
				p_dir = 0;
				break;
			case 's':
				p_dir = 1;
				break;
			case 'a':
				p_dir = 2;
				break;
			case 'd':
				p_dir = 3;
				break;
			default:
				return;
		}
		
		gotoxy((*x)*2+1,(*y)+1);
		textattr(road_color);
		printf("█");
		
		int tx = (*x) + dir[p_dir][0];
		int ty = (*y) + dir[p_dir][1];
		if(map[ty][tx])
		{
			(*x) = tx;
			(*y) = ty;
		}
		
		gotoxy((*x)*2+1,(*y)+1);
		textattr(p_color);
		printf("█");
	}
}

void g_trace(int path[],int depth,int g_x,int g_y,int p_x,int p_y,int *find){
	if(g_x==p_x && g_y==p_y)
	{
		//printf("found");
		*find = 1;
		return;
	}
	map[g_y][g_x] = 0;
	int tx,ty;
	for(int i=0;i<4&&!(*find);i++)
	{
		tx = g_x+dir[i][0];
		ty = g_y+dir[i][1];
		if(tx < M && tx >=0 && ty < N && ty >= 0 && map[ty][tx] == 1)
		{
			path[depth] = i;//儲存下一步 
			g_trace(path,depth+1,tx,ty,p_x,p_y,find);
		}
	}
	map[g_y][g_x] = 1;
}

void g_move(int next_dir,int *game,int *g_x,int *g_y,int p_x,int p_y,int g_color,int road_color){
	gotoxy((*g_x)*2+1,(*g_y)+1);
	textattr(road_color);
	printf("█");
	*g_x += dir[next_dir][0];
	*g_y += dir[next_dir][1];
	gotoxy((*g_x)*2+1,(*g_y)+1);
	textattr(g_color);
	printf("█");
	if((*g_x)==p_x&&(*g_y)==p_y)
		*game = 0;
}
