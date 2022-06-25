#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (){
	int cho,times=0,pos,rig=0,lef=0;
	srand(time(NULL));
	for(int i=1;i<=1000;i++){
		pos=5;
		while(pos!=0&&pos!=9){
		cho=(int)(rand()/(RAND_MAX+1.0)*(2))+1;
			switch(cho){
				case 1:
					pos++;
					times++;
					break;
				case 2:
					pos--;
					times++;
					break;
			}
			pos==3?(pos=1,times+=2):NULL;
			//printf("pos=%d\n",pos);
		}
		pos==0?lef++:rig++;
	}
	printf("(a)ODDs for R4:%lf,L5:%lf\n(b)ave time:%lf minutes\n",rig/1000.0,1-rig/1000.0,times/1000.0);
	rig=0;
	lef=0;
	times=0;
	for(int i=1;i<=1000;i++){
		pos=5;
		while(pos!=0&&pos!=9){
		cho=(int)(rand()/(RAND_MAX+1.0)*(2))+1;
			switch(cho){
				case 1:
					pos++;
					times++;
					break;
				case 2:
					pos--;
					times++;
					pos==3?(pos=1,times++):NULL;
					break;
			}
		}
		pos==0?lef++:rig++;
	}
	printf("(c)R4:%lf,L5:%lf,times:%lf",rig/1000.0,1-rig/1000.0,times/1000.0);
	return 0;
}
