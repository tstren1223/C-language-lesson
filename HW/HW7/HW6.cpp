#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main (){
	int cho,cho1;
	srand(time(NULL));
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
