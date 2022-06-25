#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (){
	int sed,cho,times=0,pos,rig=0,lef=0;
	printf("seed:");
	scanf("%d",&sed);
	srand(sed);
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
			pos==3?(pos=1):NULL;
			//printf("pos=%d\n",pos);
		}
		pos==0?lef++:rig++;
	}
	printf("--------Problem A--------\n----Case (1)----\nExit from left: %lf\nExit from right: %lf\nAverage staying time:%lf min\n----Case (2)----\n",lef/1000.0,1-lef/1000.0,times/1000.0);
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
					pos==3?(pos=1):NULL;
					break;
			}
		}
		pos==0?lef++:rig++;
	}
	printf("Exit from left: %lf\nExit from right: %lf\nAverage staying time: %lf min\n--------Problem B--------\n",lef/1000.0,1-lef/1000.0,times/1000.0);
	int cho1;
	srand(sed);
	for(int i=1;i<=1;i++){
		cho=(int)(rand()/(RAND_MAX+1.0)*(13))+1;
		switch(cho){
			case 1:
				printf("Ace of ");
				cho1=(int)(rand()/(RAND_MAX+1.0)*(4))+1;
				switch(cho1){
					case 1:
						printf("Spades\n");
						break;
					case 2:
						printf("Hearts\n");
						break;
					case 3:
						printf("Diamond\n");
						break;
					case 4:
						printf("Clubs\n");
						break;
				}
				break;
			case 2 ...10:
				printf("%d of ",cho);
				cho1=(int)(rand()/(RAND_MAX+1.0)*(4)+1);
					switch(cho1){
						case 1:
							printf("Spades\n");
							break;
						case 2:
							printf("Hearts\n");
							break;
						case 3:
							printf("Diamond\n");
							break;
						case 4:
							printf("Clubs\n");
							break;
				}
					break;
			case 11:
				printf("Jack of ");
				cho1=(int)(rand()/(RAND_MAX+1.0)*(4)+1);
				switch(cho1){
					case 1:
						printf("Spades\n");
						break;
					case 2:
						printf("Hearts\n");
						break;
					case 3:
						printf("Diamond\n");
						break;
					case 4:
						printf("Clubs\n");
						break;
				}
				break;
			case 12:
				printf("Queen of ");
				cho1=(int)(rand()/(RAND_MAX+1.0)*(4)+1);
				switch(cho1){
					case 1:
						printf("Spades\n");
						break;
					case 2:
						printf("Hearts\n");
						break;
					case 3:
						printf("Diamond\n");
						break;
					case 4:
						printf("Clubs\n");
						break;
				}
				break;
			case 13:
				printf("King of ");
				cho1=(int)(rand()/(RAND_MAX+1.0)*(4)+1);
				switch(cho1){
					case 1:
						printf("Spades\n");
						break;
					case 2:
						printf("Hearts\n");
						break;
					case 3:
						printf("Diamond\n");
						break;
					case 4:
						printf("Clubs\n");
						break;
				}
			
		}
	}
	return 0;
}
