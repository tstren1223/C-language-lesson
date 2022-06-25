#include <stdio.h>
#include <conio2.h> 
#include <stdlib.h>
#include"maze.h" 
 // something is missing here 
 
// Complete the showMap definition 
void showMap(int *map, int road_color, int wall_color); 
void p_move(int *x, int *y, int road_color, int p_color); 
 
// Complete the g_trace definition 
void g_trace(int *path, int depth, int g_x, int g_y, int p_x, int p_y, int *find); 
void g_move(int next_dir, int *game, int* g_x, int* g_y, int p_x, int p_y, int g_color, int road_color); 
int dir[4][2] = {{0,-1},{0,1},{-1,0},{1,0}}; // up, down , left, right 
int main(){    
	int road_color = BLACK;  
	int wall_color = WHITE;  
	int ghost_color = YELLOW;  
	int player_color = RED;    
	int game = 2;  
	int p_x=1, p_y=1;  
	int path[1000], g_x=37, g_y=23;    
	showMap(map, road_color, wall_color);  
	gotoxy(p_x*2+1,p_y+1);  
	textattr(RED);  
	printf("¢i");    
	while(game){   
		p_move(&p_x, &p_y, road_color, player_color);      
		int find = 0;   
		g_trace(path, 0, g_x, g_y, p_x, p_y, &find);         
		// Complete the call   
		g_move(¡K, ghost_color, road_color);    
		_sleep(100);     
	}  
	return 0; 
} 
 
// Complete the showMap definition void 
showMap(int *map, int road_color, int wall_color) {  
	for(int i=0; i<N ;i++){   
		for(int j=0; j<M ;j++) {    
		if(map[i][j]) {     
			textattr(road_color);     
			printf("¢i");    
			} 
		else {     
			textattr(wall_color);     
			printf("¢i");    
			}      
		}   
		printf("\n"); 
 	} 
} 
 
void p_move(int *x, int *y, int road_color, int p_color){  
	char key;  
	while(kbhit()){   
		key = getch();     
		int p_dir;   
		switch(key) {    
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
		gotoxy((*x)*2+1,*y+1);   
		textattr(road_color);   
		printf("¢i");      
		int tx = (*x) + dir[p_dir][0];  
		 int ty = (*y) + dir[p_dir][1];   
		 if(map[ty][tx]){    
		 (*x) = tx;    
		 (*y) = ty;   
		 }      
		 gotoxy((*x)*2+1,*y+1);   
		 textattr(p_color);   
		 printf("¢i");  
	} 
		  
} 
 
// Complete the g_trace definition 
void g_trace(int *path, int depth, int g_x, int g_y, int p_x, int p_y, int* find){  
	if(g_x==p_x && g_y==p_y){   
		*find = 1;   
		return; 
	}  
	map[g_y][g_x] = 0;  
	int tx, ty;  
	for(int i=0; i<4  && !(*find) ;i++)
	{         // Complete the loop  
	}    
	map[g_y][g_x] = 1; 
} 
 
void g_move(int next_dir, int *game, int* g_x, int* g_y, int p_x, int p_y, int g_color, int road_color){       
// Complete the function 

} 
