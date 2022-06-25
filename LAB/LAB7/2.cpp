#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <time.h>
int main (){
	printf("------2-A------\nseed:");
	int j=0;
	double k1;
	scanf("%lf",&k1);
	double seed1=k1,seed2;
	const double  mpy = 25173.0;
	const double  inc =13849.0;
	const double  mod =65535.0;
	for(int i=1;i<=1000000;i++){
	seed1=fmod(seed1 *mpy + inc, mod);
	seed2=fmod(seed1 *mpy + inc, mod);
	(0.5-(seed1+1)/(mod+1))*(0.5-(seed1+1)/(mod+1))+(0.5-(seed2+1)/(mod+1))*(0.5-(seed2+1)/(mod+1))<=0.25?j++:NULL;
	}
	printf("pi/4: %lf, pi=%lf\n------2-B------\n",j/1000000.0,j*4/1000000.0);
	
	int cho,cho1;
	char t;
	srand(time(NULL));
	while(scanf("%c",&t)!=EOF){
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
	}
	
	
	int k9;
	printf("------2-C------\nInput seed: ");
	scanf("%d",&k9);
	srand(k9);
	int times=0,pos,rig=0,lef=0;
	for(int i=1;i<=1000;i++){
		pos=5;
		while(pos!=0&&pos!=9){
		cho=(int)(rand()/(RAND_MAX+1.0)*(2))+1;
			switch(cho){
				case 1:
					pos--;
					times++;
					break;
				case 2:
					pos++;
					times++;
					break;
			}
			pos==3?(pos=1):NULL;
			//printf("pos=%d\n",pos);
		}
		pos==0?lef++:rig++;
	}
	printf("------case 1------\nexit from left: %.3lf\nexit from right: %.3lf\naverage staying time %lf\n",lef/1000.0,1-lef/1000.0,times/1000.0);
	rig=0;
	lef=0;
	times=0;
	for(int i=1;i<=1000;i++){
		pos=5;
		while(pos!=0&&pos!=9){
		cho=(int)(rand()/(RAND_MAX+1.0)*(2))+1;
			switch(cho){
				case 1:
					pos--;
					times++;
					break;
				case 2:
					pos++;
					times++;
					pos==3?(pos=1,times++):NULL;
					break;
			}
		}
		pos==0?lef++:rig++;
	}
	printf("------case 2------\nexit from left: %.3lf\nexit from right: %.3lf\naverage staying time %lf\n",lef/1000.0,1-lef/1000.0,times/1000.0);
	
	
	return 0;
}
