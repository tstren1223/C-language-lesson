#include<stdio.h>
#include<conio.h>
int main(){
	char p1,p2;
	printf("Enter s,c,r,or p for play 1: \n");
	p1=getch();//scanf(" %c",&p1);
	printf("Enter s,c,r,or p for play 2: \n");
	p2=getch();//scanf(" %c",&p2);
	if(p1>=65 && p1<=90)
		p1+=32;
	if(p2>=65&&p2<=90)
		p2+=32;
	switch(p1){
		case 's':
			printf("Scissors ");
			switch(p2){
				case 's':
					printf("ties scissors,p1 = p2\n");
					break;
				case 'r':
					printf("crushed by rock,p1 < p2\n");
					break;
				case 'p':
					printf("cut paper,p1 > p2\n");
					break;
			}
			break;
		case 'r':
			printf("Rock ");
			switch(p2){
				case 's':
					printf("crushes scissors,p1 > p2\n");
					break;
				case 'r':
					printf("ties rock,p1 = p2\n");
					break;
				case 'p':
					printf("wraped by paper,p1 < p2\n");
					break;
			}
			break;
		case 'p':
			printf("Paper ");
			switch(p2){
				case 's':
					printf("cut by scissors,p1 < p2\n");
					break;
				case 'r':
					printf("wraps rock,p1 > p2\n");
					break;
				case 'p':
					printf("ties paper,p1 = p2\n");
					break;
			}
			break;
		
	}
	return 0;
}
